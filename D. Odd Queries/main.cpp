#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
       long  int n,q;
        cin>>n>>q;
        long long c=0,cc=0;
       vector<long long int >arr(n+1);
        for(int i=1;i<n+1;i++)
        {
            cin>>arr[i];
            arr[i]+=arr[i-1];
        }
        long long int l ,r,k;
        while(q!=0)
        {
            q--;
            cc=0;
            cin>>l>>r>>k;
            int p=(r-l+1)*k;
            long long int sum=arr[n];
            sum-=arr[r]-arr[l-1];
            sum+=p;
            //cout<<sum<<endl
            if(sum%2!=0)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
            cout<<endl;
        }
        t--;
    }
    return 0;
}
