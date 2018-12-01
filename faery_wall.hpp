//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_FAERY_WALL_HPP
#define ABSTRACTFACTORY_FAERY_WALL_HPP

#include "wall.hpp"

/**
 * Prototype of faery wall from type wall.
 */
class faery_wall: public wall {
public:
    ~faery_wall() = default;
    void print() override;
};


#endif //ABSTRACTFACTORY_FAERY_WALL_HPP
