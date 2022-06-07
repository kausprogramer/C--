#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cout<< "please write the number of lines you want to make triange"<<endl;
    cin>>n;
    for(i=n;i>=1;i--)
    {
      for(int j=1;j<=i;j++)
        {
        cout<< "*";
        }  
    cout<<endl;
    }
    return 0;
}
