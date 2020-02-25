#include <iostream>

using namespace std;

void power(int base, int exp);

int main()
{
    cout<<"GitHub Test"<<endl;
    
    power(10, 2);
    power(5.3, 3);
    power(7.7, 1);
    power(3.9, 0);

    return 0;
}
//--
void power(double base, int exp)
{
    double result = 1;
    for(int i = 0;i < exp;i++)
    {
        result = result * base;
    }

    cout<<result<<endl;
}
