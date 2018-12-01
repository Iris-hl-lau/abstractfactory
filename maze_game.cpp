//
// Created by Iris L on 2018-11-30.
//

#include "maze_game.hpp"

/**
 * Create maze from maze factory
 * @param make_maze Maze factory
 * @return Maze
 */
maze* maze_game::create_maze(maze_factory& make_maze) {
    wall* w = make_maze.make_wall();
    room* a = make_maze.make_room();
    room* b = make_maze.make_room();
    door* d = make_maze.make_door(a, b);
    maze* m = make_maze.make_maze();
    m->add_wall(w);
    m->add_room(a);
    m->add_room(b);
    m->add_door(d);
    return m;
}
