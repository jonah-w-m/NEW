#include <iostream>
using namespace std;
int main (){
int reading ;
 cout <<"INPUT industrial sensor reading:  ";
    cin >> reading;
    if ((reading<32&&reading>22)||(reading>103))
    {cout<< "environment is Optimal";}
    else 
    cout << "environment Critical";

return 0;
    }