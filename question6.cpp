#include <iostream>
using namespace std;
int main() {
    int a, b, c;

    cout << "INPUT three integers: ";
    cin >> a >> b >> c;

    if (a>=b) {
        if (a>=c)
        {cout << "Maximum value: " <<a;}
        else 
        {cout << "Maximum value: " << c;}
    }
    else if (b >= c)
    {cout << "Maximum value: " << b;}
    else 
    cout << "Maximum value: " << c;
        
    return 0;
}

