#include  <iostream>
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

    //logic
    for(int i=0;i<n;i++)
    {
        int temp = i;
        for (int j=i+1 ;j<n;j++)
        {
            if(arr[temp]>arr[j])
            { 
                temp = j;
            }
        }

        if(temp!=i)
            swap(arr[temp],arr[i]);
    }
    // logic end

    //output
    cout<<"sorted array\n";

    for(int i=0; i<n;i++)
        cout<<arr[i]<<" ";


    return 0;
}