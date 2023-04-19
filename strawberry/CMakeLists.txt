# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(STDANYALT "Value")

set(strawberry-GENERATED_SRC
        ${PROJECT_SOURCE_DIR}/strawberry/generated/StrawberryLexer.cpp
        ${PROJECT_SOURCE_DIR}/strawberry/generated/StrawberryParser.cpp
        ${PROJECT_SOURCE_DIR}/strawberry/generated/StrawberryParserBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/strawberry/generated/StrawberryParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/strawberry/generated/StrawberryParserListener.cpp
        ${PROJECT_SOURCE_DIR}/strawberry/generated/StrawberryParserVisitor.cpp
        )

foreach(src_file ${strawberry-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${strawberry-GENERATED_SRC})

add_custom_target(GenerateParser DEPENDS ${strawberry-GENERATED_SRC})
add_custom_command(OUTPUT ${strawberry-GENERATED_SRC}
   COMMAND
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/strawberry/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/strawberry/generated/ -package strawberrycpp ${PROJECT_SOURCE_DIR}/strawberry/StrawberryLexer.g4 ${PROJECT_SOURCE_DIR}/strawberry/StrawberryParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/strawberry/StrawberryLexer.g4 ${PROJECT_SOURCE_DIR}/strawberry/StrawberryParser.g4

    #[[
    COMMAND
    perl ${PROJECT_SOURCE_DIR}/strawberry/scripts/SetReturnType.pl ${PROJECT_SOURCE_DIR}/strawberry/generated/StrawberryParserVisitor.h ${STDANYALT}
    COMMAND
    perl ${PROJECT_SOURCE_DIR}/strawberry/scripts/SetReturnType.pl ${PROJECT_SOURCE_DIR}/strawberry/generated/StrawberryParserBaseVisitor.h ${STDANYALT}
    ]]
        )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
        ${PROJECT_SOURCE_DIR}/strawberry/generated
)

set(strawberry_SRC cpp/main.cpp
        ${strawberry-GENERATED_SRC}
        cpp/types/Value.cpp cpp/types/Value.h

        cpp/StrawberryManager.cpp cpp/StrawberryManager.h cpp/types/expressions/Bool.cpp cpp/types/expressions/Bool.h cpp/types/expressions/Number.cpp cpp/types/expressions/Number.h cpp/types/nonexpressions/Lambda.cpp cpp/types/nonexpressions/Lambda.h cpp/types/Reference.cpp cpp/types/Reference.h cpp/types/expressions/String.cpp cpp/types/expressions/String.h cpp/types/containers/List.cpp cpp/types/containers/List.h cpp/types/containers/Container.cpp cpp/types/containers/Container.h cpp/types/containers/Pair.cpp cpp/types/containers/Pair.h cpp/types/containers/Hash.cpp cpp/types/containers/Hash.h cpp/util/Warnings.cpp cpp/util/Warnings.h cpp/types/containers/Matrix.cpp cpp/types/containers/Matrix.h cpp/StrawberryInterpreter.cpp cpp/StrawberryInterpreter.h cpp/StrawberryPredicateParser.cpp cpp/StrawberryPredicateParser.h)
if(NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set (flags_1 "-Wno-overloaded-virtual")
else()
  set (flags_1 "-MP /wd4251")
endif()

foreach(src_file ${strawberry_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${strawberry_SRC})

add_executable(strawberry
  ${strawberry_SRC}
  )

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(strawberry PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(strawberry GenerateParser)

target_link_libraries(strawberry antlr4_static)

install(TARGETS strawberry
        DESTINATION "share" 
        COMPONENT dev 
        )

