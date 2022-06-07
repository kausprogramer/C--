#include <iostream>
using namespace std;

int main()
{ 
    int n,i,j;
    cout<< "please write the number of lines you want to make triange"<<endl;
    cin>>n;

    for (i =  1; i<=n; i++)
    {
         for (j =  1; j<=i; j++)
        {
        cout<< j;
        }
    cout<<endl;
    }
    
    return 0;
}