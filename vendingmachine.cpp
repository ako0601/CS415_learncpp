#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv) {
    string drink[5] = {"Rootbeer", "Sprite", "Dr.Pepper", "Coke", "Monster"};
    int customerHand[5] = {0,0,0,0,0};
    float price[5] = {2.50, 2.50, 2.50, 2.25, 2.75};
    float money = 50.00;
    float insert = 0;
    int choose;
    int randnum;
    int numberOfDrink[5];
    for (int i=0; i<5; i++) {
        randnum = rand() % 20;
        numberOfDrink[i] = randnum;
    }
    
    bool buy = true;
    
    while(buy) {
        cout << "----------------------" << endl;
        for (int i=0; i<5; i++) {
            if (numberOfDrink[i]==0) {
                cout << "| " << i+1 << ". " << drink[i] << ": " << "- SOLD OUT -" << " || $" << price[i] << endl;
            } else {
                cout << "| " << i+1 << ". " << drink[i] << ": " << numberOfDrink[i] << " || $" << price[i] << endl;
            }
        }
        cout << "----------------------" << endl;
        
        cout << "What do you want? (Press the number)" << endl;
        cin >> choose; 
        float payment = price[choose-1];
        while (payment != insert) {
            payment -= insert;
            cout << "Insert $" << payment << ": ";
            cin >> insert;
        }
        
        money += insert;
        insert = 0;
        
        numberOfDrink[choose-1] -= 1;
        customerHand[choose-1] += 1;
        
        string decision;
        cout << "Despensing " << drink[choose-1] << endl;
        cout << "Cach on hand: $" << money << endl;
    }
}