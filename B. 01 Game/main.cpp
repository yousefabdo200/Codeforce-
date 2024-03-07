#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       string s;
       cin>>s;
       int z=0,o=0;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='0')
           {
               z++;
           }
           else
           {
               o++;
           }
       }
       int ans =min(z,o);
       if(ans%2)
       {
           cout<<"DA";
       }
       else
       {
           cout<<"NET";
       }
       cout<<endl;
       t--;
   }
    return 0;
}
