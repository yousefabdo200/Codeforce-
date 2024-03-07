#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int zero=0,other=0;
        vector<long long int>v(n);
        long long int mx=-1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                zero++;
            }
            else
            {
                other++;
            }
        }
        mx=*max_element(v.begin(),v.end());
        if(zero<=other+1)
        {
            cout<<0<<endl;
        }
        else
        {
            if(mx==1)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        t--;
    }
    return 0;
}
