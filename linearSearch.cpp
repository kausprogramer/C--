#include<iostream>
using namespace std;
int linearSearch(int* arr , int n , int num)
{
    if(n==0)
    {
        return arr[n];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n=0;
    cout<<"Size of arr= ";  
    cin>>n;
    cout<<endl;
    int* arr= new int(n);
    cout<<"please enter the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"number you want to search= ";
    int num=0;
    cin>>num;
    
    int sol=linearSearch(arr,n,num);
    cout<<sol;
    return 0;
}