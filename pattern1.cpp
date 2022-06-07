#include <iostream>
using namespace std;

int main()
{
    int rows,collomn;
    cin>> rows >> collomn;
    for(int i=0; i<=rows;i++)
    {
        for (int j=0;j<=collomn;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}