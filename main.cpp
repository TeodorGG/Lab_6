#include <iostream>
#include "Banca.h"

using namespace std;

int main() {

    //ccrare banca
    Banca *b = new Banca("Banca1");
    //creare cleint
    Client *c1 = new Client("Tudor", new Cont(120));
    b->addClient(c1); // adugare client
    b->show_clients(); // afiseasa clienti

    //
    b->giveCredit(0, new Credit(1000, 25, "21.01.2021")); // adauga credit la client cu indexul 0
    b->setDepozit(0, new Depozit(1200, 1.25, "21.11.2021"));// adauga depozit la client cu indexul 0


    b->getClietByIndex(0)->getCont().showCredits(); //  afisesaza creditele clientului cu indexul 0
    b->getClietByIndex(0)->getCont().showDepozit();// afisesaza depozitele clientului cu indexul 0

    b->getClietByIndex(0)->getCont().getDepozitByIndex(0)->getMonney(); // primeste procentle de la depozit
    b->getClietByIndex(0)->getCont().setMoneyForCredit(0, 1800); // achita pentru un anumit credit

    cout << "Suma pe cont " << b->getClietByIndex(0)->getCont().getSuma(); // afiseaza suma curenta de pe cont a clientului

    return 0;
}
