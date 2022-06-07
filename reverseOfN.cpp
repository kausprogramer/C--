#include <iostream>

using namespace std;

int main()
{
    cout << "please enter the number"<<endl;

    int n;
    cin>>n;

    int rev=0;

    while (n>0)
    {
        int temp = n%10;
        rev = rev*10 +temp;
        n=n/10;
    }
    cout<<rev;

    return 0;

}