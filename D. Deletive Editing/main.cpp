#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    /*
    while(it!=m1.end())
    {
        cout<<it->second<<" "<<endl;
        it++;
    }*/
    while(t!=0)
    {
        map<char,int>m1;
        map<char,int>m2;
        map<char,int>::iterator it=m1.begin();
        char ch='A';
        while(ch!='Z'+1)
        {
            m1.insert(it,{ch,0});
            it++;
            ch++;
        }
        string s1,s2,ns1="";
        cin>>s1>>s2;
        int c=0;
        for(int i=0;i<s1.length();i++)
        {
            for(int x=0;x<s2.length();x++)
            {
                if(s1[i]==s2[x])
                {
                    ns1+=s1[i];
                    break;
                }
            }
            if(s2[i]==s2[0])
            {
                c++;
            }
        }
        int p=0;
        string r="YES";
        for(int i=ns1.length()-1;i>=0;i--)
        {
            //cout<<c;
            if(ns1[i]==s2[0])
            {
                c--;
            }
            if(c==0)
            {
                p=i;
                break;
            }
        }
        for(int i=0 ;i<s2.length();i++)
        {
            it=m1.find(s2[i]);
            ++it->second;
            m1.insert(it,{s2[i],it->second});
        }
        it=m1.begin();
        //cout<<p;
        int x=0;
        s1="";
        for(int i=0;i<s2.length();i++)
        {
            it=m1.find(s2[i]);
            //cout<<it->second<<endl;
            if(it->second>=1)
            {
                //cout<<"gr";
                for(int x=ns1.length()-1;x>=0;x--)
                {

                    if(it->second!=0&&s2[i]==ns1[x])
                    {
                        //s1+=ns1[x];
                        //ns1[x]=' ';
                        --it->second;
                        p=x;
                        //break;
                    }
                }
                for(int x=0;x<p;x++)
                {

                    if(ns1[x]==s2[i])
                    {
                        ns1[x]=' ';
                    }
                    //cout<<"rge ";
                }

            }
        }
        ns1.erase(std::remove_if(ns1.begin(), ns1.end(), ::isspace),ns1.end());
        //cout<<ns1<<endl;

        for(int i=0;i<s2.length();i++)
        {
            if(ns1[i]!=s2[i])
            {
                r="NO";
                break;
            }
            x++;
        }
        cout<<r<<endl;
        t--;
    }
    return 0;
}
