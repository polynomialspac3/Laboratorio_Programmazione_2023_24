cmake_minimum_required(VERSION 3.27)
project(Laboratorio)

set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_PREFIX_PATH "/root/lib/cmake/Qt5Widgets")

find_package(Qt5Widgets REQUIRED)

add_executable(Laboratorio main.cpp
        barra.cpp
        barra.h
        observer.h
        pulsante.cpp
        pulsante.h
        subject.h
        test/pulsanteTest.cpp
)


target_link_libraries(Laboratorio PRIVATE Qt5::Widgets)