#include<iostream>
using namespace std;

//logic of code
bool check(string str,int high,int low)
{
    if(high>=low)
    {
        return true;
    }
    if((str.substr(high,1)) != (str.substr(low,1)))
    {
        return false;
    }
    else
        return true;

    return check(str,high+1,low-1);
}
// logic ends here

int main()
{
    //input
    string str;
    cout << "enter sting you want to check\n";
    cin>>str;

    // defining length of string
    int len= str.length();

    //recursion call
    bool sol=check(str,0,len-1);

    //output
    if(sol)
        cout<<"true";

    else
        cout<<"false";

    return 0;
}