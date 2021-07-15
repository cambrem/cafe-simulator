cmake_minimum_required(VERSION 3.8)
project(CafeSimulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp Drink.cpp Drink.h Cafe.cpp Cafe.h Shop.cpp Shop.h Customer.cpp Customer.h)
add_executable(test testing.cpp Drink.cpp Drink.h Cafe.cpp Cafe.h Shop.cpp Shop.h Customer.cpp Customer.h)