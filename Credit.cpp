//
// Created by Tudor Deviza on 08.11.2021.
//

#include "Credit.h"

Credit::Credit(float suma, float procent, const string &date) : Action(suma, procent, date),
                                                                                sum_ramas(suma*(100+procent)),
                                                                                sum_of_redit(suma*(100+procent)) {
}

float Credit::repay(float suma) {
    this->sum_ramas -= suma;
    if(this->sum_ramas<0)
        return abs(this->sum_ramas);
    else {
        return 0;
    }
}

float Credit::getSumRamas() const {
    return sum_ramas;
}

void Credit::setSumRamas(float sumRamas) {
    sum_ramas = sumRamas;
}

float Credit::getSumOfRedit() const {
    return sum_of_redit;
}

void Credit::setSumOfRedit(float sumOfRedit) {
    sum_of_redit = sumOfRedit;
}
