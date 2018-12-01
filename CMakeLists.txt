cmake_minimum_required(VERSION 3.12)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic -std=c++14")

add_executable(abstractfactory driver.cpp maze_factory.hpp room.hpp wall.hpp door.hpp maze.hpp maze_game.hpp faery_land.cpp faery_land.hpp faery_door.cpp faery_door.hpp faery_wall.cpp faery_wall.hpp faery_room.cpp faery_room.hpp faery_maze.cpp faery_maze.hpp)