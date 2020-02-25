#include <iostream>

using namespace std;

double power(double base, int exp);

int main()
{
    cout << "GitHub Test" << endl;

    double y = power(10, 2);
    cout << y << endl;
    y = power(5.3, 3);
    cout << y << endl;

    y = power(7.7, 1);
    cout << y << endl;

    y = power(3.9, 0);
    cout << y << endl;


    return 0;
}
//--

double power(double base, int exp)
{
    double result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }

    return result;
}
