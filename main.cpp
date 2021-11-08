#include <iostream>
#include "Banca.h"

using namespace std;

int main() {
    Banca *b = new Banca("Banca1");
    Client *c1 = new Client("Tudor", new Cont(120));
    b->addClient(c1);

    b->show_clients();


    return 0;
}
