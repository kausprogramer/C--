#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"first number a";
    cin>>a;
    cout<<endl<<"second number b";
    cin>>b;
    //xor of a and b to a gives temporary value of b
    a=a^b;
    //xor of a and b to b gives final value of b
    b=a^b;
    //xor of a and b to a gives final value of b
    a=a^b;
    
    cout<<"a-> "<<a<<" ,"<<"b-> "<<b;
}


