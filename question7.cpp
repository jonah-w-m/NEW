#include <iostream>
using namespace std;
int main() {
int firstcode;
int secondcode; 

    cout <<"INPUT 1 if true or 0 if false\n is visibility poor? ";
    cin >> firstcode ;
    cout <<" is Runway cluttered? ";
    cin >> secondcode;

if (firstcode==!1&&secondcode==!1)
{cout <<"Cleared to Land";}
    else
    cout <<"Hold Position";

    return 0;

}