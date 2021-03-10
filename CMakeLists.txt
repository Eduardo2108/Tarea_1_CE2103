cmake_minimum_required(VERSION 3.17)
project(TareaExtra_1_CE2103)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS_DEBUG "-g")
add_executable(TareaExtra_1_CE2103 main.cpp src/Collector/Collector.cpp src/Collector/Collector.h src/List/List.cpp src/List/List.h src/Node/Node.cpp src/Node/Node.h "src/Collector/Simply linked list/SLL.cpp" "src/Collector/Simply linked list/SLL.h")