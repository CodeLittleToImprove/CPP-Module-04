cmake_minimum_required(VERSION 3.30)
project(cpp04)

set(CMAKE_CXX_STANDARD 98)


add_executable(cpp04_ex00
        ex00/Animal.cpp
        ex00/Cat.cpp
        ex00/Dog.cpp
        ex00/main.cpp
        ex00/WrongAnimal.cpp
        ex00/WrongCat.cpp)

add_executable(cpp04_ex01
        ex01/Animal.cpp
        ex01/Brain.cpp
        ex01/Cat.cpp
        ex01/Dog.cpp
        ex01/main.cpp)

add_executable(cpp04_ex02
        ex02/AAnimal.cpp
        ex02/Brain.cpp
        ex02/Cat.cpp
        ex02/Dog.cpp
        ex02/main.cpp)