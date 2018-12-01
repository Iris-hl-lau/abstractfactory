//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "room.hpp"
#include "door.hpp"
#include "wall.hpp"

/**
 * Maze factory prototype.
 */
class maze_factory {
private:

public:
    ~maze_factory() = default;
    virtual maze* make_maze() = 0;
    virtual wall* make_wall() = 0;
    virtual room* make_room() = 0;
    virtual door* make_door(room* a, room* b) = 0;
    };
#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
