//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include <iostream>
#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"
using namespace std;

/**
 * Maze prototype.
 */
class maze {
    room* r;
    door* d;
    wall* w;
public:
    ~maze() = default;
    virtual void print() = 0;
    void add_room(room* r) {r = r;};
    void add_door(door* d) {d = d;};
    void add_wall(wall* w) {w = w;};
};

#endif //ABSTRACTFACTORY_MAZE_HPP
