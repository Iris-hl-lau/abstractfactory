//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_FAERY_ROOM_HPP
#define ABSTRACTFACTORY_FAERY_ROOM_HPP

#include "room.hpp"

/**
 * Prototype of type feary room from type room
 */
class faery_room : public room{
public:
    ~faery_room() = default;
    void print() override;
};


#endif //ABSTRACTFACTORY_FAERY_ROOM_HPP
