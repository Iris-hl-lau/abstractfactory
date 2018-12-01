//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_FAERY_LAND_HPP
#define ABSTRACTFACTORY_FAERY_LAND_HPP
#include "maze_factory.hpp"
#include "faery_door.hpp"
#include "faery_room.hpp"
#include "faery_wall.hpp"
#include <iostream>
using namespace std;

class faery_land : public virtual maze_factory {
public:
    ~faery_land() = default;
    maze* make_maze() override;
    wall* make_wall() override;
    room* make_room() override;
    door* make_door(room* a, room* b) override;
};


#endif //ABSTRACTFACTORY_FAERY_LAND_HPP
