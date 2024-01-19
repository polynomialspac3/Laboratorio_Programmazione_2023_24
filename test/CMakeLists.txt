# 'Google_test' is the subproject name
project(test)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})



add_executable(RunallTests Testclassi.cpp
        )

target_link_libraries(RunallTests core gtest gtest_main)


