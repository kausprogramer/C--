
#include<iostream>
using namespace std;
 
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }

    else
    {
        return(n * factorial(n - 1));
    }
}
 
int main()
{
    cout<<"write number"<<endl;
    int num;
    cin>>num;
    int sol= factorial(num);
    printf ("Factorial of %d is %d", num, sol);
    return 0;
}