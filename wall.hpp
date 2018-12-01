//
// Created by Iris L on 2018-11-30.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

#include <iostream>
using namespace std;

/**
 * Wall prototype.
 */
class wall {
public:
    ~wall() = default;
    virtual void print() = 0;
};

#endif //ABSTRACTFACTORY_WALL_HPP
