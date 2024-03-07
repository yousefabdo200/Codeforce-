#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   string s;
   char c='B';
   int r=0;
   while(t!=0)
   {
       for(int i=0;i<8;i++)
       {
           cin>>s;
           if(s[0]=='.'||s[0]=='B')
           {
               r++;
           }
           else{
                sort(s.begin(),s.end());
                if(s[0]=='B')
                {
                    r++;
                }
                else{
                    r--;
                }
           }



       }
       if(r==8)
       {
           cout<<"B"<<endl;
       }
       else
       {
           cout<<"R"<<endl;
       }
       c='R';
       r=0;
       t--;
   }
    return 0;
}
