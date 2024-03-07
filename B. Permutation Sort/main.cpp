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
        vector<int>v;
        int r=0;
        int check=0;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            v.push_back(num);
            if(v[i]<i+1)
            {
                check=1;
            }
        }
        if(check==0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(v[0]==1||v[n-1]==n)
            {
                cout<<1<<endl;
            }
            else if(v[n-1]==1&&v[0]==n)
            {
                cout<<3<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        t--;
    }
    return 0;
}
