cmake_minimum_required(VERSION 3.28)
project(BlackConsleCompetition)

set(CMAKE_CXX_STANDARD 17)

add_executable(BlackConsleCompetition main.cpp
        src/PhysicsEngine2D/PlainVector.h
        src/PhysicsEngine2D/PlainVector.cpp)
