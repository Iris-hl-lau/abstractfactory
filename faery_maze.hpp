//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_FAERY_MAZE_HPP
#define ABSTRACTFACTORY_FAERY_MAZE_HPP

#include "maze.hpp"

/**
 * Prototype of faery maze from type maze.
 */
class faery_maze : public maze {
public:
    ~faery_maze() = default;
    void print() override;
};


#endif //ABSTRACTFACTORY_FAERY_MAZE_HPP
