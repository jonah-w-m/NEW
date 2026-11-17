#include <iostream>
using namespace std;
int main() {
string name;
string tier;
int age;
        cout<< "INPUT name: ";
        getline(cin,name);
        cout <<"INPUT membership tier: ";
        cin >> tier;
    if (tier=="VIP"||tier=="Premium"){
        cout <<"INPUT age: ";
        cin >> age ;
            if(age>17) {
                cout<< "ACCESS GRANTED";}
                else{ cout<< "ACCESS DENIED";
            }}
    else 
    cout <<"you are placed in the general waiting list ";
    
return 0;
}
