//
// Created by Tudor Deviza on 08.11.2021.
//

#ifndef UNTITLED5_ACTION_H
#define UNTITLED5_ACTION_H

#include <string>
#include <iostream>

using namespace std;

class Action {

private :
    float suma;
    float procent;
    string date;

public:
    Action(float suma, float procent, const string &date);

    float getSuma() const;

    void setSuma(float suma);

    float getProcent() const;

    void setProcent(float procent);

    const string &getDate() const;

    void setDate(const string &date);


};


#endif //UNTITLED5_ACTION_H
