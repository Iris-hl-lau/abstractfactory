//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

#include <iostream>
using namespace std;

/**
 * Room prototype.
 */
class room {
public:
    ~room() = default;
    virtual void print() = 0;
};

#endif //ABSTRACTFACTORY_ROOM_HPP
