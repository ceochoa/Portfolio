cmake_minimum_required(VERSION 3.14)
project(Portafolio)

set(CMAKE_CXX_STANDARD 14)

add_executable(Portafolio main.cpp Portfolio.cpp Portfolio.h Stock.cpp Stock.h StockCollection.cpp StockCollection.h Date.cpp Date.h)