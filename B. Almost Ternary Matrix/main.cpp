#include <iostream>

using namespace std;

int main()
{
   int t=0;
   cin>>t;
   while(t!=0)
   {
       int n,m;
       cin>>n>>m;
       string s1="",s2="";
       for(int x=1;x<=m/2;x++)
       {
           if(x%2!=0)
           {
               s1+="1 0 ";
           }
           else  s1+="0 1 ";

       }
          for(int x=1;x<=m/2;x++)
           {
               if(x%2!=0)
               {
                   s2+="0 1 ";
               }
               else s2+="1 0 ";
           }
           for(int i=1;i<=n/2;i++)
           {
               if(i%2!=0)
               {
                   cout<<s1<<endl<<s2<<endl;
               }
               else{
                cout<<s2<<endl<<s1<<endl;
               }
           }
       s1="";
       s2="";
       t--;
   }
    return 0;
}
