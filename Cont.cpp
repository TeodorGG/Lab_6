//
// Created by Tudor Deviza on 08.11.2021.
//

#include "Cont.h"

Cont::Cont(float suma) : suma(suma) {}

void Cont::addCredit(Credit c) {
    this->credits.push_back(&c);
}

void Cont::addDepozit(Depozit d) {
    this->depozits.push_back(&d);
}

Credit *Cont::getCreditByIndex(int i) {
    list<Credit*>::iterator l_front = credits.begin();
    advance(l_front, index);
    Credit *a = *l_front;
    return a;
}

Depozit *Cont::getDepozitByIndex(int i) {
    list<Depozit*>::iterator l_front = depozits.begin();
    advance(l_front, index);
    Depozit *a = *l_front;
    return a;
}

float Cont::getSuma() const {
    return suma;
}

void Cont::setSuma(float suma) {
    Cont::suma = suma;
}

const list<Credit *> &Cont::getCredits() const {
    return credits;
}

void Cont::setCredits(const list<Credit *> &credits) {
    Cont::credits = credits;
}

const list<Depozit *> &Cont::getDepozits() const {
    return depozits;
}

void Cont::setDepozits(const list<Depozit *> &depozits) {
    Cont::depozits = depozits;
}

void Cont::getMoneyFromDepozit(int index) {
    this->suma += getDepozitByIndex(index)->getMonney();
}

void Cont::setMoneyForCredit(int index, float s) {
    float m = getCreditByIndex(index)->repay(s);
    this->suma+=m;
}

void Cont::showCredits() {
    for(auto a : credits){
        cout << a->getSuma() << " " << a->getProcent() << " " << a->getSumRamas() << endl;
    }

}

void Cont::showDepozit() {
    for(auto a : depozits){
        cout << a->getSuma() << " " << a->getProcent() << " " << a->getDate() << endl;
    }
}


