#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"please enter number u want to check"<<endl;
    cin>>a;
    if(a&1==1)
    {
        cout<<"is odd";
    }
    else
    {
        cout<<"is even";
    }
    return 0;
}
