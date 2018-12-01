//
// Created by Iris L on 2018-11-30.
//

#include "faery_door.hpp"

/**
 * Prints message for type faery door.
 */
void faery_door::print() {
    cout << "Faery door." << endl;
}

/**
 * Constructor of faery door
 * @param a Faery room
 * @param b  Faery room
 */
faery_door::faery_door(room *a, room *b) {
    room_a = a;
    room_b = b;
}
