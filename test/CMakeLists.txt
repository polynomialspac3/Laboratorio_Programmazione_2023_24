project(test)

add_subdirectory(lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include${gtest_SOURCE_DIR})

add_executable(runAll pulsanteTest)

target_link_libraries(runAll gtest gtest_main core)