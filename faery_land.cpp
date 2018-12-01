//
// Created by Iris L on 2018-11-30.
//

#include "faery_land.hpp"


maze *faery_land::make_maze() {
    cout << "Making maze." << endl;
    return new fae;
}

wall *faery_land::make_wall() {
    cout << "Making wall." << endl;
    return new wall;
}

room *faery_land::make_room() {
    cout << "Making room." << endl;
    return new room;
}

door *faery_land::make_door(room* a, room* b) {
    cout << "Making door." << endl;
    return new door;
}
