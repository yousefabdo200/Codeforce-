#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int n=s1.length();
    string s="";
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
        {
            s+="0";
        }
        else{
            s+="1";
        }
    }
    cout<<s;
    return 0;
}
