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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int last=v[n-1];
        int r=0;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]>last)
            {
                r++;
                last=v[i];
            }
        }
        cout<<r<<endl;
        t--;
    }
    return 0;
}
