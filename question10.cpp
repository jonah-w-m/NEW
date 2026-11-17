#include <iostream>
using namespace std;

int main() {
    float purchaseAmount;
    float finalBalance;
    int loyaltyStatus;

    cout << "Enter total purchase amount: ";
    cin >> purchaseAmount;
    cout << "Enter loyalty status (1 = member, 0 = non-member): ";
    cin >> loyaltyStatus;

     finalBalance = purchaseAmount * 0.90;


if (purchaseAmount > 5000) {

        if (loyaltyStatus == 1) {
           
            finalBalance = finalBalance * 0.95;
        }
    }
    else {

        if (loyaltyStatus == 1) {
            finalBalance = purchaseAmount * 0.98;}
        else {
             finalBalance = purchaseAmount;}
    }
    cout << "Final payable balance: " << finalBalance << " shillings";

    return 0;
}
