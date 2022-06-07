#include <iostream>
using namespace std;

int main()
{
     int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int net=0;
    for(int i=0 ;i<n;i++)
    {
        net=net^arr[i];
    }
    int mask= net&(~(net-1));
    int x=0;
    int y=0;

    for(int i=0;i<n;i++)
    {
        if((mask&arr[i])>0)
        {
            x=x^arr[i];
        }

        else
        y=y^arr[i];
    }
    if(x>y)
    cout<<y<<endl<<x;

    else
    cout<<x<<endl<<y;
}