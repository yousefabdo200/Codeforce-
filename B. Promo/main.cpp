#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<long long int>v;
    int num;
    long long int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    long long arr[n+2];
    arr[0]=0;
    int p=1;
    for(int i=n-1;i>=0;i--)
    {
        arr[p]=arr[p-1]+v[i];
        p++;
    }
    int x,y;
    while(q!=0)
    {
        cin>>x>>y;
        cout<<arr[x]-arr[x-y]<<endl;
        p=0;
        q--;
    }
    return 0;
}
/*
for(int i=x-y;i<(x-y)+y;i++)
        {
            c+=v[i];
        }
        cout<<c<<endl;
        */
