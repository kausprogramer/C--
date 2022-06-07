#include<iostream>
using namespace std;

int main()
{
    int a;
    a=543;
    int num=0;
    while(a>0)
    {
        a=a&(a-1);
        num++;
    }

    cout <<num;
}