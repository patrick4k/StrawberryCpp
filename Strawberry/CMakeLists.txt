# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(antlr4-demo-GENERATED_SRC
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/TLexer.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/TParser.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/TParserBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/TParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/TParserListener.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/TParserVisitor.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryLexer.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParser.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserListener.cpp
        ${PROJECT_SOURCE_DIR}/Strawberry/generated/StrawberryParserVisitor.cpp
        )

foreach(src_file ${antlr4-demo-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${antlr4-demo-GENERATED_SRC})

add_custom_target(GenerateParser DEPENDS ${antlr4-demo-GENERATED_SRC})
add_custom_command(OUTPUT ${antlr4-demo-GENERATED_SRC}
   COMMAND
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/Strawberry/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/Strawberry/generated/ -package antlrcpptest ${PROJECT_SOURCE_DIR}/Strawberry/StrawberryLexer.g4 ${PROJECT_SOURCE_DIR}/Strawberry/StrawberryParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/Strawberry/StrawberryLexer.g4 ${PROJECT_SOURCE_DIR}/Strawberry/StrawberryParser.g4
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

#file(GLOB antlr4-demo_SRC "${PROJECT_SOURCE_DIR}/Strawberry/generated/*")
set(antlr4-demo_SRC
        ${PROJECT_SOURCE_DIR}/Strawberry/Cpp/main.cpp
  ${antlr4-demo-GENERATED_SRC} Cpp/StrawberryInterpreter.cpp Cpp/StrawberryInterpreter.h)

if(NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set (flags_1 "-Wno-overloaded-virtual")
else()
  set (flags_1 "-MP /wd4251")
endif()

foreach(src_file ${antlr4-demo_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${antlr4-demo_SRC})

add_executable(antlr4-demo
  ${antlr4-demo_SRC}
  )
#add_precompiled_header(antlr4-Strawberry ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(antlr4-demo PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(antlr4-demo GenerateParser)

target_link_libraries(antlr4-demo antlr4_static)

install(TARGETS antlr4-demo
        DESTINATION "share" 
        COMPONENT dev 
        )

