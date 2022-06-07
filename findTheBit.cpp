#include <iostream>

using namespace std;

int main()
{
    int a =15;
    int i = 2;
    int temp ;
    
    temp= 1<<i-1;

    if(temp%2==0)
    {
        cout<<"0";
    }
    else
    {
        cout<<"1";
    }

   
    return 0;
} 