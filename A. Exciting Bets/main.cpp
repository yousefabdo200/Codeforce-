#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    //cout<<__gcd(3,9);
    while(t!=0)
    {
        long long int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<"0 0"<<endl;
        }
        else
        {
            long long int a=max(x,y);
            long long int b=min(x,y);
            cout<<a-b<<" "<<min(a-b-x%(a-b),x%(a-b))<<endl;
        }
        t--;
    }
    return 0;
}
