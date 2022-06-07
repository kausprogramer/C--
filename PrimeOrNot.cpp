#include <iostream>
#include <cmath>

using namespace std;
int main()
{
cout<<"please enter the integer u want to check"<<endl;
int n;
cin>>n;

bool flag =0;
for (int i =2; i <= sqrt(n); i++)
{
    if (n%i==0)
    {   
    cout<<"this number is not prime";
    flag=1;
    break;
    }
}
if (!flag)
{
    cout<<"this number is prime";
}
return 0;   
}


