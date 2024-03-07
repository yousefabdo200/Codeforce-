#include<bits/stdc++.h>
using namespace std;

int main()
{
    string guest,host,all;
    cin>>guest>>host>>all;
    string s=guest+host;
    sort(s.begin(),s.end());
    sort(all.begin(),all.end());
    string r="NO";
    if(s.length()==all.length())
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==all[i])
            {
                r="YES";
            }
            else{
                r="NO";
                break;
            }
        }
    }
    cout<<r;
    return 0;
}
