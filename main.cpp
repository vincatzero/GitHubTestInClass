#include <iostream>

using namespace std;

void square(int num);

int main()
{
    cout<<"GitHub Test"<<endl;
    square(10);
    return 0;
}
//--
void square(int num)
{
    int result = num * num;
    cout<<result<<endl;
}
