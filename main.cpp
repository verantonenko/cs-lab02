#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cout << "enter A and B: ";
    int a, b;
    cin >> a >> b;

    cout << "a + b = " << a + b << endl
         << "a - b = " << a - b << endl
         << "a * b = " << a * b << endl
         << "a / b = " << a / b << endl;
    if (a > b)
        cout << "max: " << a << endl;
    else if (b > a)
        cout << "max: " << b << endl;
    else
        cout << "the numbers are equal." << endl;
}
