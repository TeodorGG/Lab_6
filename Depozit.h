//
// Created by Tudor Deviza on 08.11.2021.
//

#ifndef UNTITLED5_DEPOZIT_H
#define UNTITLED5_DEPOZIT_H


#include "Action.h"

class Depozit : public Action {
public:
    Depozit(float suma, float procent, const string &date);

    float getMonney();
};


#endif //UNTITLED5_DEPOZIT_H
