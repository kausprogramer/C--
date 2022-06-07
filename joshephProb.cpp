#include <iostream>
using namespace std;

int joseph(int n, int k)
{
    if(n==1)
        return 1;

    return ((joseph(n-1,k)+k)%n);
}

int main()
{
    //input
    int n,k;

    cout<<"how many people aer playing\n";
    cin>>n;

    cout<<"in how many spaces people will die\n";
    cin>>k;

    //recursive Call
    int sol = joseph(n,k);

    //output
    cout<<"preson left -"<<sol;

    return 0;
}