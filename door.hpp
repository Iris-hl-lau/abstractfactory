//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP

#include <iostream>
using namespace std;

/**
 * Door prototype.
 */
class door {
public:
    ~door() = default;
    virtual void print() = 0;
};

#endif //ABSTRACTFACTORY_DOOR_HPP
