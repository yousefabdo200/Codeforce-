#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s,r;
    int n,k;
    map<char,int>m;
    map<char,int>::iterator it =m.begin();
    char c='a';
    bool a=false;
    for(int i=0;i<26;i++)
    {
        m.insert(it,{c,0});
        c++;
        it++;
    }
    it =m.begin();

    while(t!=0)
    {
        it =m.begin();
        cin>>n>>k;
        cin>>s;
        int l=n/k;
        it =m.begin();
        for(int i=0;i<n;i++)
        {
            it=m.find(s[i]);
            m.insert(it,{it->first,it->second++});
        }
        while(k!=0)
        {

            it =m.begin();
            for(int x=0;x<=l;x++)
            {
                if(it->second==0||x==l)
                {
                    cout<<it->first;
                   break;


                }
                else{
                    it->second--;
                }
                it++;

            }
            k--;
        }
        cout<<endl;
        it=m.begin();
        while(it!=m.end())
        {
            it->second=0;
            it++;
        }
        t--;
    }

    return 0;
}
