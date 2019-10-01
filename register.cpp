#include <iostream>
#include <string>
#include "register.h"

using namespace std;

float total = 50.00;
float insert = 0;
float payment;

Register::Register(float price) {
    Register::price = price;
}

void Register::printTotalCash() {
    payment = price;
    while (payment != insert) {
        payment -= insert;
        cout << "Insert $" << payment << ": ";
        cin >> insert;
    }
    total += price;
    insert = 0;
    cout << "Total Cash: " << total << endl;
}

Register::~Register() {
    
}
