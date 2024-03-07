#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string remove0(string s ,int l)
{
    for(int i=0;i<l;i++)
    {
        if(s[0]=='0')
        {
            s.erase(0,1);
        }
        else if(s[i]=='1')
        {
            return s;
        }
    }
    return s;
}
int main()
{
    int t,n;
    cin>>t;
    string s;
    int c=0;
    while(t!=0)
    {
        cin>>n;
        cin>>s;
        int m=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='1')
            {
                c++;
                if(s[i]==s[i+1])
                {
                    m++;
                }
            }else if(s[i]=='0'){
                if(s[i]==s[i+1])
                {
                    continue;
                }
                else
                {
                    c++;
                }
            }

        }

        if(s[0]=='0' & (c-m-1)>=0)
        {
            cout<<(c-1)-m<<endl;
        }
        else if(s[0]=='1' & (c-m)>=0)
        {
            cout<<c-m<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        c=0;
        t--;
    }
    return 0;
}
