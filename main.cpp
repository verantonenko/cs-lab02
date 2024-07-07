#include <iostream>

using namespace std;

int main()
{
    cout << "enter A and B: ";
    double a, b;
    cin >> a >> b;

    cout << "a + b = " << a + b << endl
         << "a - b = " << a - b << endl
         << "a * b = " << a * b << endl
         << "a / b = " << a / b << endl;

    if (a > b)
        cout << "max: " << a << endl
             << "min: " << b << endl;
    else if (b > a)
        cout << "max: " << b << endl
             << "min: " << a << endl;
    else
        cout << "the numbers are equal." << endl;
}

