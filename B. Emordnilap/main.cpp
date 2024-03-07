#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int N=1e5+5;
int main()
{
    int t;
    cin>>t;


    while(t!=0)
    {
         long long int n;
         cin>>n;
        long long fac[n+5];
        fac[0]=1;
        fac[1]=1;

        for(int i=2; i<=n; i++)
        {
            fac[i]=i*fac[i-1]; // n!=n*(n-1)*(n-2)
            fac[i]%=mod;
        }
        cout<<((n*(n-1))%mod*fac[n])%mod<<endl;
        t--;
    }
    return 0;
}
