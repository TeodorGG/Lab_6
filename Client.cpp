//
// Created by Tudor Deviza on 08.11.2021.
//

#include "Client.h"

Client::Client(const string &nume, Cont *cont) : nume(nume), cont(*cont) {}

const string &Client::getNume() const {
    return nume;
}

void Client::setNume(const string &nume) {
    Client::nume = nume;
}

Cont &Client::getCont() {
    return cont;
}

void Client::setCont(const Cont &cont) {
    Client::cont = cont;
}
