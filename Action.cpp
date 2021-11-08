//
// Created by Tudor Deviza on 08.11.2021.
//

#include "Action.h"

Action::Action(float suma, float procent, const string &date) : suma(suma), procent(procent), date(date) {}

float Action::getSuma() const {
    return suma;
}

void Action::setSuma(float suma) {
    Action::suma = suma;
}

float Action::getProcent() const {
    return procent;
}

void Action::setProcent(float procent) {
    Action::procent = procent;
}

const string &Action::getDate() const {
    return date;
}

void Action::setDate(const string &date) {
    Action::date = date;
}
