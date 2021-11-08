//
// Created by Tudor Deviza on 08.11.2021.
//

#include "Depozit.h"

Depozit::Depozit(float suma, float procent, const string &date) : Action(suma, procent, date) {}

float Depozit::getMonney() {
    return this->getSuma()*(100 + this->getProcent());
}
