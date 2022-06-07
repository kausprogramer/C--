#include <bits/stdc++.h>
using namespace std;

int digits(int n) 
{
    if(n<10)
        return n;

    int sol = digits(n/10);
    cout<<sol%10<<endl;
}

int main()
{
    //input
    int n;
    cout<<"enter number you waant to print"<<endl;
    cin>>n;

    //recur call
    digits(n);

    cout<<n<<endl;
    return 0;
}