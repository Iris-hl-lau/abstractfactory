//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_FAERY_DOOR_HPP
#define ABSTRACTFACTORY_FAERY_DOOR_HPP

#include "door.hpp"

/**
 * Feary door protoype from type door.
 */
class faery_door : public door {
public:
    ~faery_door() = default;
    void print() override;
};


#endif //ABSTRACTFACTORY_FAERY_DOOR_HPP
