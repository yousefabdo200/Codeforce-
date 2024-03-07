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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int c=0;
        int r=0;
        int l=n-1;
        int x=0;
        while(x<n/2)
        {
            c+=arr[l]-arr[r];
            r++;
            l--;
            x++;
        }
        cout<<c<<endl;
        t--;
    }
    return 0;
}
