#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int d;
    string s;
    string c="";
    for(int i=0 ;i<n;i++)
    {
        cin>>d;
        cin>>s;
        string r="YES";
        for(int x=0;x<d;x++)
        {
            if(s[x]==s[x+1])
            {
                continue;
            }
            else
            {
                c+=s[x];
            }
        }
        sort(c.begin() , c.end());
        for(int x=0;x<c.length();x++)
        {

            if(c[x]==c[x+1])
               {
                   r="NO";
                    break;
               }
        }
        cout<<r<<endl;
        c="";
        r="YES";
    }
    return 0;
}
