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
        string tex;
        cin>>tex;
        set<string>s;
        for(int i=0;i<n-1;i++)
        {
            string s2="";
            s2+=tex[i];
            s2+=tex[i+1];
            s.insert(s2);
        }
        cout<<s.size()<<endl;
        t--;
    }

    return 0;
}
