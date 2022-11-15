cmake_minimum_required(VERSION 3.23)
project(Labo_05_H)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(Labo_05_H main.cpp outils.cpp outils.h eratosthene.cpp eratosthene.h)
