#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,r="NO";
   getline(cin,s);
   int x=s.length();
   --x;
    for(int i=0;i<=x;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[x]=='H'||s[x]=='Q'||s[x]=='9')
        {
            r="YES";
            break;
        }
        if(i>x)
        {
            break;
        }
        x--;
    }
    cout<<r;
    return 0;
}
