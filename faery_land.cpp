//
// Created by Iris L on 2018-11-30.
//

#include "faery_land.hpp"


maze *faery_land::make_maze() {
    cout << "Making maze." << endl;
    return new faery_maze;
}

wall *faery_land::make_wall() {
    cout << "Making wall." << endl;
    return new faery_wall;
}

room *faery_land::make_room() {
    cout << "Making room." << endl;
    return new faery_room;
}

door *faery_land::make_door(room* a, room* b) {
    cout << "Making door." << endl;
    return new faery_door(a, b);
}
