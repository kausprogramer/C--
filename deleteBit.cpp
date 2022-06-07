#include <iostream>
using namespace std;

int main()
{
    int a,i;

    a=543;
    i=3;

    int temp;
    temp= (~(1<<i));
    int final;
    final = (temp&a);
    cout<<final;
}