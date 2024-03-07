#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char>v;
    char c='A';
    string s;
    cin>>s;
    for(int i=901;i<=926;i++)
    {
        v.push_back(c);
        if(s[0]==c||s[0]==tolower(c))
        {
            cout<<i<<endl;
            break;
        }
        c++;
    }

    return 0;
}
