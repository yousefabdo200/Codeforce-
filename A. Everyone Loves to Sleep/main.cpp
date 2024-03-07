#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,h0,m0;
    int h1,m1;
    while(t!=0)
    {
        cin>>n>>h0>>m0;
        vector <pair<int,int>>v;
        for(int i =0;i<n;i++)
        {
            cin>>h1>>m1;
            v.push_back({h1,m1});
        }
        sort(v.begin(),v.end());
        int found=0;
        for(int i=0;i<n;i++)
        {
            if(v[i].first==h0)
            {
                if(v[i].second>=m0)
                {
                    found=1;
                    h1=v[i].first;
                    m1=v[i].second;
                    break;
                }
            }
            else if(v[i].first>h0)
            {
                    found=1;
                    h1=v[i].first;
                    m1=v[i].second;
                    break;
            }
        }
        //cout<<v[0].first;
        //cout<<" "<<v[0].second;
        if(found==0)
        {
            h1=v[0].first;
            m1=v[0].second;
            h1+=24;
        }
        //cout<<h1<<" "<<m1;
        int h=0,m=0;
        if((h0==h1&&m0>=m1))
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            h=h1-h0;
            if(m1>m0)
            {
                m=m1-m0;
            }
            else if(m0>m1)
            {
                m=m0-m1;
                m=60-m;
                --h;
            }
           cout<<h<<" "<<m<<endl;

        }

        t--;
    }
   return 0;
}
