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
        string s;
        cin>>s;
        int r=1,mx=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                r++;
            }
            else
            {
                mx=max(r,mx);
                r=1;
            }
        }
        cout<<max(mx,r)+1<<endl;
        t--;
    }
    return 0;
}
