#include <bits/stdc++.h>

using namespace std;
int out(int n)
{
    
    int x=0;
    int y=1;

    while(n>0)
    {
        int z= n%10;
        n=n/10;
        x=x+(y*z);
        y=y*8;
       
    }
    return x;
}

int32_t main()
{
 int n;
 cin>>n;
 cout<<out(n)<<endl;
}