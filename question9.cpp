#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            cout << "The triangle is Equilateral";
        }
        else if (a == b || a == c || b == c) {
            cout << "The triangle is Isosceles";
        }
        else {
            cout << "The triangle is Scalene";
        }
    }
    else {
        cout << "The sides do not form a valid triangle";
    }

    return 0;
}
