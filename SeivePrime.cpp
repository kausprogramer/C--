#include<bits/stdc++.h>
using namespace std;
 int main()
    {
        int N;
        cout<<"enter the number you want to check"<<endl;
        cin>>N;
       vector <bool> arr(N+1,true);
        
        arr[0]=false;
        arr[1]=false;
        
        for(int i=2; i*i<=N;i++)
        {
            for(int j=2*i;j<=N;j+=i)
            {
                arr[j]=false;
            }
        }
        if(arr[N])
            cout<<("True");
        else
            cout<<"False";
        return 0;
    }