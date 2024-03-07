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
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<s;
        }
        else if(c==n)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    cout<<'B';
                }
                else
                {
                    cout<<'R';
                }
            }
        }
        else
        {
            int i=0;
            while(i<n)
            {
                if(s[i]=='?')
                {
                    if(i-1>=0)
                    {
                        if(s[i-1]=='B')
                        {
                            s[i]='R';
                        }
                        else if(s[i-1]=='R')
                        {
                            s[i]='B';
                        }
                    }
                }
                i++;
            }
             i=n-1;
            while(i>=0)
            {
                if(s[i]=='?')
                {
                    if(i+1<n)
                    {
                        if(s[i+1]=='B')
                        {
                            s[i]='R';
                        }
                        else if(s[i+1]=='R')
                        {
                            s[i]='B';
                        }
                    }
                }
                i--;
            }
            cout<<s;
        }


        cout<<endl;
        t--;
    }
    return 0;
}
