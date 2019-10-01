#include <iostream>
#include <string>
#include "dispenser.h"

using namespace std;

Dispenser::Dispenser(int order, string drink, float cost, int number) {
    Dispenser::order = order;
    Dispenser::drink = drink;
    Dispenser::cost = cost;
    Dispenser::number = number;
    price = NULL;
}

void Dispenser::printInfo() {
    if (number <= 0){
        cout << "| " << order << ") "<< drink << ": $" << cost << " || " << "--SOLD OUT--" << endl;
    } else {
        cout << "| " << order << ") "<< drink << ": $" << cost << " || " << number << " items" << endl;
    }
}

void Dispenser::Dispense() {
    Dispenser::number -= 1;
    if (price != NULL) {
        price->printTotalCash();
    }
    cout << "Despensing " << drink << "." << endl;
}

void Dispenser::getNumber(float priceOfProduct) {
    price = new Register(priceOfProduct);
}

Dispenser::~Dispenser() {
    if (price != NULL) {
        delete price;
    }
}
