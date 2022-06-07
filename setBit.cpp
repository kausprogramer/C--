#include <iostream>
using namespace std;

int main()
{
    int a,i;
    a=543;
    i=5 ;

    int temp =0;
    temp = 1<<i;
    int final=0;
    final = (a|temp);
    cout<<final;

}