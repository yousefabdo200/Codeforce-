#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int n1,p1,n2,p2;
        cin>>n1>>p1>>n2>>p2;
        string s1,s2;
        s1=to_string(n1);
        s2=to_string(n2);
        int l1=p1;
        int l2=p2;
        l1+=s1.length();
        l2+=s2.length();
        if(l1>l2)
        {
            cout<<'>'<<endl;
        }
        else if(l1<l2)
        {
            cout<<'<'<<endl;
        }
        else
        {
            while(s1.length()>s2.length())
            {
                s2+="0";
            }
            while(s1.length()<s2.length())
            {
                s1+="0";
            }
            if(s1>s2)
            {
                 cout<<'>'<<endl;
            }
            else if(s2>s1)
            {
                 cout<<'<'<<endl;
            }
            else
            {
                 cout<<'='<<endl;
            }

        }
        t--;
    }
    return 0;
}
/*
 if(p1>p2)
        {
            p1-=p2;
            p2=0;
        }
        else if(p2>p1)
        {
            p2-=p1;
            p1=0;
        }
        else
        {
            p1=0;
            p2=0;
        }
        if(n1>n2&&p1>=p2)
        {
            cout<<'>'<<endl;
        }
        else if(n1<n2&&p1<=p2)
        {
            cout<<'<'<<endl;
        }
        else if(n1==n2&&p1==p2)
        {
            cout<<'='<<endl;
        }
        else
        {
             n1*=pow(10,p1);
            n2*=pow(10,p2);
        if(n1==n2)
        {
            cout<<'='<<endl;
        }
        else if(n1>n2)
        {
            cout<<'>'<<endl;
        }
        else
        {
            cout<<'<'<<endl;
        }
        }
        t--;
        */
