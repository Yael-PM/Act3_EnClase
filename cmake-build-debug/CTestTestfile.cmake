# CMake generated Testfile for 
# Source directory: Y:/CLion_Projects/MathLib
# Build directory: Y:/CLion_Projects/MathLib/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[AllTests]=] "Y:/CLion_Projects/MathLib/cmake-build-debug/test_suite.exe")
set_tests_properties([=[AllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "Y:/CLion_Projects/MathLib/CMakeLists.txt;42;add_test;Y:/CLion_Projects/MathLib/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
