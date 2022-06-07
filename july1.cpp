#include <iostream>

using namespace std;

int main()
{
    int x ;int y;int z; int d;int case1; int case2; int ans;  int t;
cin>>t;
for(int i=0;i>t;i++)
{
cin>>d>>x>>y>>z;

case1 = 7*x;
case2 = ((d*max(y,x))+((7-d)* min(x,z)));

cout<<max(case1,case2); 
}
return 0;
}
