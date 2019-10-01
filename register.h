#include <iostream>
#include <string>

#ifndef REGISTER_H
#define REGISTER_H

using namespace std;

class Register {
public:
    Register(float o);
    void printTotalCash();
    ~Register();
private:
    float price;

};

#endif 