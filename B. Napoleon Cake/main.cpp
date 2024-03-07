#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s="";
       long long int n;
        cin>>n;
        vector<long long int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int c=v[n-1];
        for(int i=n-1;i>=0;i--)
        {
            //cout<<c<<endl;
            if(v[i]>=c)
            {
                c=v[i];
            }
            if(c>0&&c>=v[i])
            {
                s+='1';
                c--;
            }
            else
            {
                s+='0';
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;
        t--;
    }
    return 0;
}
