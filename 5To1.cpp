#include<bits/stdc++.h>
using namespace std;
void recurcall(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<"\n";
    
    return recurcall(n-1);
}

int main()
{
    //input
    int n;
    cout<<"How many number you want to print"<<endl;
    cin>>n;

    //recurcall
    recurcall(n);

    return 0;
}
