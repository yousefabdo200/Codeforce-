#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
       sort(v.begin(),v.end());
       int c=1,r=0;
       for(int i=1;i<n;i++)
        {
            if(v[i]-v[i-1]<=k)
                c++;
            else
            {
                r=max(r,c);
                c=1;
            }
        }
        r=max(r,c);
        cout<<n-r<<endl;
    }
    return 0;
}
