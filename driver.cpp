#include <iostream>
#include "maze_game.hpp"
#include "faery_land.hpp"
//#include "futuristic.hpp"
int main() {
    maze_game mazegame;
    maze* maze_faery = mazegame.create_maze(*(new faery_land()));
    maze_faery->print();
    //maze_factory* futuristic_dystopian = new futuristic();

    delete maze_faery;
    //delete futuristic_dystopian;

    return 0;
}