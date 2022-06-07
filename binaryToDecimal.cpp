#include <bits/stdc++.h>

using namespace std;

int  main()
{
    int n;
    cin>>n;
    int x=0;
    int y=1;

    while(n>0)
    {
        int z= n%10;
        n=n/10;
        x=x+(y*z);
        y=y*2;
       
    }
     cout << x<<flush;
}

