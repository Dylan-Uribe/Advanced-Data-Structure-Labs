cmake_minimum_required(VERSION 3.24)
project(BinaryTreeProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(BinaryTreeProject main.cpp Models/BinaryTree.cpp Models/BinaryTree.h Models/Node.cpp Models/Node.h Types/types.h)
