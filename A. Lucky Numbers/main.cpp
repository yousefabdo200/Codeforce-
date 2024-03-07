#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int x,n;
        cin>>x>>n;
        if(x==n)
        {
            cout<<x<<endl;
        }
        else
        {
            int mx=0,r=n;
            int steps=0;
            for(int i=n;i>=x;i--)
            {
                string s=to_string(i);
                sort(s.begin(),s.end());
                int num=s[s.length()-1]-s[0];
                if(mx<num)
                {
                    mx=num;
                    r=i;
                }
                if(mx==9)
                {
                    break;
                }
                //steps++;

            }
            cout<<r<<endl;

        }

        t--;
    }
    return 0;
}
