#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    string ans="YES";
    vector <int> v;
    for(int i=x+1;i<=y;i++)
    {
        bool r= false;
        for(int z=2;z<=sqrt(y);z++)
        {
            if(i%z==0)
            {
                r=true;
            }
        }
        if(r!=true)
        {
            v.push_back(i);
            r=false;
        }
        if(v.size()==2)
        {
            ans="NO";
            break;
        }
    }
    if(ans=="NO")
    {
        cout<<ans<<endl;
    }
    else
    {
        if(v.size()==0||v.front()!=y)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
