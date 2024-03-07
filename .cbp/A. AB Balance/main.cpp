#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        cin>>s;
        int l=s.length();
        //int ab=0,ba=0;
        if(s[0]!=s[l-1])
        {
            s[0]=s[l-1];
        }
        cout<<s<<endl;
        //cout<<ab<<" "<<ba<<endl;

        t--;
    }
    return 0;
}
