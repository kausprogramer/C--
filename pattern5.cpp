#include <iostream>
using namespace std;

int main()
{
    int n;
    int i,j,k;
    cout<< "please write the number of lines you want to make triange"<<endl;
    cin>>n;
    
    for(i=n;i>=1;i--)
    {
        for ( j = i; j >1; j--)
        {
            cout<<" ";
        }
       for ( j = i; j >1; j--)
        {
        
        for ( k = 1; k <=i; k--)
        {
            cout<<"*";
        }
        }
        cout<<endl;
        
    }

    return 0;
}