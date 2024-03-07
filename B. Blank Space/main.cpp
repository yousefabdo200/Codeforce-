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
       int r=0;
       int c=0;
       for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                ++c;
                if(c>r)
                {
                    r=c;
                }
            }
            else
            {
               c=0;
            }
        }
        /*
        if(n==1)
        {
            if(arr[0]==1)
                cout<<0<<endl;
            else
            {
                cout<<1<<endl;
            }
        }
        else*/
            cout<<r<<endl;
        t--;
    }
    return 0;
}
