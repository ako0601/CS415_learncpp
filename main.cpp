#include <iostream>
#include <string>
#include "dispenser.h"

using namespace std;

int main(int argc, char **argv) {
    Dispenser coke(1,"Coke", 2.25, 10);
    Dispenser rootbeer(2,"Rootbeer", 2.5, 10);
    Dispenser sprite(3,"Sprite", 2.5, 10);
    Dispenser drpepper(4,"Dr.Pepper", 2.75, 10);
    Dispenser monster(5,"Monster", 3.25, 10);
    
    int choose;
    bool buy = true;

    while (buy) {
        cout << "---------------------------" << endl;
        coke.printInfo();
        rootbeer.printInfo();
        sprite.printInfo();
        drpepper.printInfo();
        monster.printInfo();
        cout << "---------------------------" << endl;
        
        cout << "What do you want? (Press the number)" << endl;
        cin >> choose; 
        
        if (choose == 1) {
            coke.getNumber(2.25);
            coke.Dispense();
        } else if (choose == 2) {
            rootbeer.getNumber(2.5);
            rootbeer.Dispense();
        } else if (choose == 3) {
            sprite.getNumber(2.5);
            sprite.Dispense();
        } else if (choose == 4) {
            drpepper.getNumber(2.75);
            drpepper.Dispense();
        } else if (choose == 5) {
            monster.getNumber(3.25);
            monster.Dispense();
        } else {
            buy = false;
        }
    }
}