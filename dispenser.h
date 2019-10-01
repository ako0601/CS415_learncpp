#include <iostream>
#include <string>
#include "register.h"

#ifndef ITEM_H
#define ITEM_H

using namespace std;

class Dispenser {
public:
    Dispenser(int o, string d, float c, int n);
    void printInfo();
    void Dispense();
    void getNumber(float c);
    ~Dispenser();
private:
    int order;
    string drink;
    float cost;
    int number;
    Register *price;
};

#endif 