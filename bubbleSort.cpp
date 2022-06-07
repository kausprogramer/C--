#include<iostream>

using namespace std;

int main()
{
    //N input
    int n;
    cout<<"How many numbers do you want in array \n";
    cin>>n;

    //array input
    int arr[n];
    cout<<"array input\n";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //sorting logic
    for(int i=0;i<n-1;i++)
    {
        int flag = 1;

        for(int j =0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = 0;
            }
        }
        if (flag)
            break;
    }
    //logic ends

    //output
    cout<<"sorted array\n";

    for(int i=0; i<n;i++)
        cout<<arr[i];

    return 0;
}