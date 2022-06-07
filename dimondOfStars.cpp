#include <iostream>
using namespace std;

int main()
{
int n,i,j;
 cout<< "please write the number of lines you want to make triange"<<endl;
    cin>>n;
for (i =1; i <= n; i++)
{
    for (j =1; j<=(n-i); j++)
        {
            cout<<" ";
        }
   for ( j =1; j <=((2*i)-1); j++)
   {
    if (j==1||j==((2*i)-1))
      {
        cout<<"*";
      }
    else
    {
        cout<<" ";
    }
    
   }
   cout<<endl;
}
for (i =1; i <= n; i++)
{
    for (j =1; j<=i-1; j++)
        {
            cout<<" ";
        }
    for ( j =1; j <=((2*(n-i))+1); j++)
   {
       if (j==1||j==((2*(n-i))+1))
       {
            cout<<"*";
       }
       else
       {
           cout<<" ";
       }
       
       
   }
   cout<<endl;
}


return 0;
}