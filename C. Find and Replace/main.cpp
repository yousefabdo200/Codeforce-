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
        string s;
        cin>>n>>s;
        string r="YES";
        char c;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                continue;
            if(s[i]=='0')
                continue;
            c=s[i];
                int p=i;
                for(;p<n;p++)
                {
                    //cout<<s<<endl;
                    if(s[p]==c)
                    {
                        if(i%2==0)
                        {
                            s[p]='0';
                        }
                        else
                        {
                            s[p]='1';
                        }
                    }
                }

        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                r="NO";
                break;
            }
        }
        cout<<r<<endl;
       t--;
   }
    return 0;
}
