#include <iostream>
using namespace std;
int main (){
int x;
    cout <<"INPUT a mark from 0 to 100:  ";
    cin >> x;
    if(x<0||x>100){
        cout<<"INVALID INPUT! \n TRY AGAIN";
    }
    else if (x>=70&&x<=100){
        cout << "A";
    }
    else if(x>=60&&x<=69){
        cout << "B";
    }
     else if(x>=50&&x<=59){
        cout << "C";
    }
     else if(x>=40&&x<=49){
        cout << "D";
    }
    else
        cout<< "F";
    
    return 0;
}