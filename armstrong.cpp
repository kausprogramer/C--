#include<bits\stdc++.h>
using namespace std;

int main()
{
    int input=0;
    cout<<"enter number"<<endl;
    cin>>input;
    int temp2=input;
    int sum=0;
    while(input)
    {
        int temp = input%10;
        sum+=pow(temp,3);
        input=input/10;
    }
    if(sum==temp2)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}