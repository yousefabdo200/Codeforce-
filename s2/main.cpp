#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int t;
    cin>>t;
    long long int v;
    long long int c=0;
    long long x=INT_MIN;
    bool r=false;
    while(t!=0)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            c+=v;

        }
        for(int i=0;i<n;i++)
        {
            cin>>v;
            c+=v;
            if(v>x)
            {
                x=v;
            }
        }
        cout<<c-x<<endl;
        c=0;
        t--;
        x=INT_MIN;
    }
    return 0;
}
