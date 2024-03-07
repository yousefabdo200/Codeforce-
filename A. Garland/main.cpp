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

    sort(s.begin(),s.end());
    if(s[0]==s[3])
    {
        cout<<-1<<endl;
    }
    else if((s[0]!=s[1]&&s[1]!=s[2]&&s[2]!=s[3])||(s[0]!=s[3]&&s[1]!=s[2])||(s[0]!=s[1]&s[2]!=s[3]))
    {
        cout<<4<<endl;
    }
 else
   {
       cout<<6<<endl;
   }

       t--;
   }
    return 0;
}
