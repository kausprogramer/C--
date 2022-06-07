#include<iostream>
using namespace std;

int main()
{
    int x=0;
    cout<<"Number you want to check\n";
    cin>>x;

    if(x%2==0)
        cout<<"even";
    else
        cout<<"odd";
    return 0;
}