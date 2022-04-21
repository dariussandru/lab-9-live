cmake_minimum_required(VERSION 3.21)
project(Lab_9_10)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab_9_10 main.cpp Domain/Entity.cpp Domain/Entity.h Repo/Repo.cpp Repo/Repo.h
        Tests/tests.cpp Tests/tests.h)
