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
        cin>> n;
        int r=0;
        vector<int>v,odd;
        for(int i=0;i<n;i++)
        {
           int num;
           cin>>num;
           if(num%2==0)
           {
               v.push_back(num);
           }
           else
           {
               odd.push_back(num);
           }
        }
        for(auto i : odd)
        {
            v.push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            for(int x=i+1;x<n;x++)
            {
                if(__gcd(v[i],2*v[x])>1)
                {
                    r++;
                }
            }
        }
        cout<<r<<endl;
        t--;
    }
    return 0;
}
