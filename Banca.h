//
// Created by Tudor Deviza on 08.11.2021.
//

#ifndef UNTITLED5_BANCA_H
#define UNTITLED5_BANCA_H


#include <string>
#include <iostream>
#include <list>
#include "Client.h"

using namespace std;

class Banca {
private :
    string nume_banaca;
    list<Client*> cliets;
public :
    Banca(const string &numeBanaca);

    const string &getNumeBanaca() const;

    void setNumeBanaca(const string &numeBanaca);

    const list<Client *> &getCliets();

    void setCliets(const list<Client *> &cliets);

    void addClient(Client *c);

    void giveCredit(int index, Credit *c);
    void setDepozit(int index, Depozit *d);

    void show_clients();

    Client* getClietByIndex(int index);
};


#endif //UNTITLED5_BANCA_H
