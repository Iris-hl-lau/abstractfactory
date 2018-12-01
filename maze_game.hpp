//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP

#include "maze_factory.hpp"

/**
 * Maze game prototype.
 */
class maze_game {
public:
    ~maze_game() = default;
    maze_factory* create_maze(maze_factory& make_maze);
};


#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
