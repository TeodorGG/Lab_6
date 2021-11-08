//
// Created by Tudor Deviza on 08.11.2021.
//

#ifndef UNTITLED5_CREDIT_H
#define UNTITLED5_CREDIT_H


#include "Action.h"

class Credit : public Action {
private :
    float sum_ramas;
    float sum_of_redit;
public :

    Credit(float suma, float procent, const string &date);

    float repay(float suma);

    float getSumRamas() const;

    void setSumRamas(float sumRamas);

    float getSumOfRedit() const;

    void setSumOfRedit(float sumOfRedit);
};


#endif //UNTITLED5_CREDIT_H
