#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    int p1,p2;
    int c=0;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        int a[n],b[n];
        p2=n-1;
        p1=0;
        for(int x=0;x<n;x++)
        {
            cin>>a[x];
        }
        for(int x=0;x<n;x++)
        {
            cin>>b[x];
        }
        sort(a,a+n);
        sort(b,b+n);
        while(k!=0)
        {
            if(a[p1]<b[p2])
            {
                swap(a[p1],b[p2]);
            }
            k--;
            p2--;
            p1++;
        }
        for(int x=0;x<n;x++)
        {
            c+=a[x];
        }
        cout<<c<<endl;
        c=0;
    }
    return 0;
}
