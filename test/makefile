cmake_minumum_required(VERSION 3.8)

set(This Test)

set(Sources
	Test.cpp
)

add_executable($(This) ${Sources})
target_link_libraries(${This} PUBLIC
	gtest_main
	pulsante
)

add_test(
	NAME ${This}
	COMMAND ${This}
)