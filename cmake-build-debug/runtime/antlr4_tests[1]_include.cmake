if(EXISTS "/home/patrick/Documents/Interpreters/StrawberryCpp/cmake-build-debug/runtime/antlr4_tests[1]_tests.cmake")
  include("/home/patrick/Documents/Interpreters/StrawberryCpp/cmake-build-debug/runtime/antlr4_tests[1]_tests.cmake")
else()
  add_test(antlr4_tests_NOT_BUILT antlr4_tests_NOT_BUILT)
endif()
