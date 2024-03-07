#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
   vector<long long int>v(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int ans=v[n-2]-v[0];
    ans=min(ans,(v[n-1]-v[1]));
    cout<<ans;

    return 0;
}
