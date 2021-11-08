//
// Created by Tudor Deviza on 08.11.2021.
//

#ifndef UNTITLED5_CONT_H
#define UNTITLED5_CONT_H

#include <string>
#include <iostream>
#include <list>
#include "Credit.h"
#include "Depozit.h"

using namespace std;

class Cont {
private :
    float suma;
    list<Credit*> credits;
    list<Depozit*> depozits;
public :
    Cont(float suma);
    void addCredit(Credit *c);
    void addDepozit(Depozit *d);

    Credit* getCreditByIndex(int i);
    Depozit* getDepozitByIndex(int i);

    float getSuma() const;

    void setSuma(float suma);

    const list<Credit *> &getCredits() const;

    void setCredits(const list<Credit *> &credits);

    const list<Depozit *> &getDepozits() const;

    void setDepozits(const list<Depozit *> &depozits);

    void getMoneyFromDepozit(int index);

    void setMoneyForCredit(int index, float s);

    void showCredits();
    void showDepozit();
};


#endif //UNTITLED5_CONT_H
