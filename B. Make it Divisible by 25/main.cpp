#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        cin>>s;
        int n=s.length();
        int ans=n;
        for(int i=0;i<n;i++)
        {
            for(int x=i+1;x<n;x++)
            {
                int num=(s[i]-'0')*10+(s[x]-'0');
                if(num%25==0)
                {
                  ans=min(ans,(x-i-1)+(n-x-1));
                }
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
