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
        vector<int >v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=v[0];
        for(int i=1;i<n;i++)
        {
            ans&=v[i];
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
