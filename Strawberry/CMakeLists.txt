# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(STDANYALT "Value")

set(strawberry-GENERATED_SRC
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryLexer.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParser.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserListener.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserVisitor.cpp
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
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/Strawberry/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/Strawberry/generated/ -package strawberrycpp ${PROJECT_SOURCE_DIR}/Strawberry/StrawberryLexer.g4 ${PROJECT_SOURCE_DIR}/Strawberry/StrawberryParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/Strawberry/StrawberryLexer.g4 ${PROJECT_SOURCE_DIR}/Strawberry/StrawberryParser.g4

    #[[
    COMMAND
    perl ${PROJECT_SOURCE_DIR}/Strawberry/Scripts/SetReturnType.pl ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserVisitor.h ${STDANYALT}
    COMMAND
    perl ${PROJECT_SOURCE_DIR}/Strawberry/Scripts/SetReturnType.pl ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserBaseVisitor.h ${STDANYALT}
    ]]
        )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/Strawberry/generated
)

set(strawberry_SRC Cpp/main.cpp
        ${strawberry-GENERATED_SRC}
        Cpp/types/Value.cpp Cpp/types/Value.h

        Cpp/StrawberryManager.cpp Cpp/StrawberryManager.h Cpp/types/expressions/Bool.cpp Cpp/types/expressions/Bool.h Cpp/types/expressions/Number.cpp Cpp/types/expressions/Number.h Cpp/types/nonexpressions/Lambda.cpp Cpp/types/nonexpressions/Lambda.h Cpp/types/Reference.cpp Cpp/types/Reference.h Cpp/types/expressions/String.cpp Cpp/types/expressions/String.h Cpp/types/containers/List.cpp Cpp/types/containers/List.h Cpp/types/containers/Container.cpp Cpp/types/containers/Container.h Cpp/types/containers/Pair.cpp Cpp/types/containers/Pair.h Cpp/types/containers/Hash.cpp Cpp/types/containers/Hash.h Cpp/util/Warnings.cpp Cpp/util/Warnings.h Cpp/types/containers/Matrix.cpp Cpp/types/containers/Matrix.h Cpp/StrawberryInterpreter.cpp Cpp/StrawberryInterpreter.h Cpp/StrawberryPredicateParser.cpp Cpp/StrawberryPredicateParser.h)
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

