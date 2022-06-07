#include<iostream>
using namespace std;

//recursive logic
int ways(int m,int n)
{
    if(n==1||m==1)
    {
        return 1;
    }

    return(ways(m-1,n)+ways(m,n-1));
}
//logic ends

int main()
{
    // input for size of array
    int m,n;
    cout<<"please give input for m \n";
    cin>>m;

    cout<<"please give input for n \n";
    cin>>n;

    //recursive call
    int sol = ways(m,n);

    //output
    cout<<"number of ways of thi array is"<<endl;
    cout<<sol<<endl;

    return 0;
}