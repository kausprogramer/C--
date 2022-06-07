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

    //logic of Sort
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp) 
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    //logic ends

    //output
    cout<<"sorted array\n";

    for(int i=0; i<n;i++)
        cout<<arr[i];


    return 0;
}