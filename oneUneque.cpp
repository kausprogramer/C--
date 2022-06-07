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

    int unq=0;
    for(int i=0 ;i<n;i++)
    {
        unq=unq^arr[i];
    }

    cout<<unq;
 
    return 0;
}