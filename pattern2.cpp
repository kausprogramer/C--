#include <iostream>
using namespace std;

int main()
{
    int row,collomn;
    cout<< "please enter row"<< endl;
    cin>>row;
    cout<< "please enter collomn"<< endl;
    cin>>collomn;
int i,j;
    for( i=1; i<=row;i++)
    {
        for ( j=1; j<=collomn;j++)
        {
            if(j== 1||j== collomn||i==1||i== row)
            {
                cout<<'*';
            }
            else
            {
               cout<<' ';
            }
            
        }
        cout<<endl;
    }

}