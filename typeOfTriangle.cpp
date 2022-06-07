#include<iostream>
using namespace std;

int main()
{
int sideab,sidebc, sideca;
cin >> sideab>>sidebc>>sideca;
if (sideab==sidebc&&sidebc==sideca)
{
cout<<"Triange is equilatral"<< endl;
}

else if (sideab==sidebc||sidebc==sideca||sideca==sideab)
{
   cout<<"triangle is isosceles triangle"<< endl;
}

else
{
    cout<<"triangle is scalene"<< endl;
}
    return 0;
}