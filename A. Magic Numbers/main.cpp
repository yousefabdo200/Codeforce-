#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   long long int n=s.length();
   string r="YES";
   for(int i=0;i<n;)
   {
       if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
       {
           i+=3;
       }
       else if(s[i]=='1'&&s[i+1]=='4')
       {
           i+=2;
       }
       else if(s[i]=='1')
       {
           i++;
       }
       else
       {
           r="NO";
           break;
       }

   }
    cout<<r;
    return 0;
}
