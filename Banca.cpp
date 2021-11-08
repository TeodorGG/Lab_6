//
// Created by Tudor Deviza on 08.11.2021.
//

#include "Banca.h"
#include <iterator>

Banca::Banca(const string &numeBanaca) : nume_banaca(numeBanaca) {}

const string &Banca::getNumeBanaca() const {
    return nume_banaca;
}

void Banca::setNumeBanaca(const string &numeBanaca) {
    nume_banaca = numeBanaca;
}

const list<Client *> &Banca::getCliets() {
    return cliets;
}

void Banca::setCliets(const list<Client *> &cliets) {
    Banca::cliets = cliets;
}

void Banca::addClient(Client *c) {
    this->cliets.push_back(c);

}

void Banca::giveCredit(int index, Credit *c) {
    auto l_front = this->cliets.begin();
    advance(l_front, index);
    Client *a = *l_front;

    a->getCont().addCredit(c);

}

void Banca::setDepozit(int index, Depozit *d) {
    auto l_front = this->cliets.begin();
    advance(l_front, index);
    Client *a = *l_front;

    a->getCont().addDepozit(d);
}

void Banca::show_clients() {
    for(auto a : cliets){
        cout << a->getNume() + "\n";
    }
}

Client *Banca::getClietByIndex(int index) {
    list<Client*>::iterator l_front = this->cliets.begin();
    advance(l_front, index);
    Client *a = *l_front;
    return a;
}
