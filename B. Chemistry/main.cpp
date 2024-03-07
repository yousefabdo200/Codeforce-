#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;
        map<char,int>::iterator it;
        int c=0;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(auto i:m)
        {
            if(i.second%2)
            {
                c++;
            }
        }

        if(c<=(k+1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }
    return 0;
}
