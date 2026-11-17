#include <iostream>
using namespace std;
int main (){
char gender;
int age;
    cout<<"INPUT gender using 'M' or 'F' : ";
    cin >> gender;
    cout<< "input age ";
    cin >> age ;
   if (age<18&&gender=='M')
   {cout <<"Junior Football";}
    else if(age>17&&gender=='M')
    {cout <<"Senior Rugby";}
    else if (age<18&&gender=='F')
    {cout<<"Junior Gymnastics";}
    else if (age>17&&gender=='F')
    {cout <<"Senior Hockey";}
    else 
    cout <<"INVALID gender character entered";

    return 0;
    

}