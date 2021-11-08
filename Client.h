//
// Created by Tudor Deviza on 08.11.2021.
//

#ifndef UNTITLED5_CLIENT_H
#define UNTITLED5_CLIENT_H

#include <string>
#include <iostream>
#include <list>
#include "Cont.h"

using namespace std;
class Client {
private :
    string nume;
    Cont cont;

public:
    Client(const string &nume, Cont *cont);

    const string &getNume() const;

    void setNume(const string &nume);

    Cont &getCont();

    void setCont(const Cont &cont);
};


#endif //UNTITLED5_CLIENT_H
