#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    long long int num;
    bool s=true;
    while(t!=0)
    {
        cin>>n;
         vector <int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
       int r=INT_MAX;
       int maximum=0;
       for(int i=0;i<n-1;i++)
        {
            r=min(r,v[i]);
        }
        maximum=max(maximum,v[n-1]-r);
        int r2=0;
        for(int i=n-1;i>0;i--)
        {
            r2=max(r2,v[i]);
        }
        maximum=max( maximum,r2-v[0]);
        for(int i=0;i<n-1;i++)
        {
            maximum=max(maximum,v[i]-v[i+1]);
        }
        cout<<maximum<<endl;
        v.clear();
        t--;
    }

    return 0;
}
/*
 for(int i=0;i<n;i++)
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
int s=INT_MAX;
    int m=INT_MIN;
    while(t!=0)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(n==1)
            {
                s=num;
                m=num;
            }else if(num<=s)
            {
                s=num;
            }
            else if(num>=m)
            {
                m=num;
            }
        }
        cout<<m-s<<endl;
        s=INT_MAX;
        m=INT_MIN;
        t--;
    }
    */
