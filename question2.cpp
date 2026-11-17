#include <iostream>
using namespace std;
int main (){
float s;
float p;
    cout << "INPUT primary voltage: ";
    cin>> p;
    cout << "INPUT secondary voltage: ";
    cin>> s;
    if (p<=0||s<=0){
        cout<<"VALUE MUST BE STRICTLY GREATER THAN ZERO!";
    }
    else if (s>p){
        cout <<"this is a Step-Up transformer";
    }
    else if (s<p){
        cout<< "this is a Step-Down transformer";
    }
    else 
        cout << "this is an Isolation transformer";
   
return 0;
}