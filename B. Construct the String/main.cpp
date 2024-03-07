#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       int n , a ,b;
       cin>>n>>a>>b;
       char c=97;
       string s="";
       for(int i=0;i<b;i++)
       {
           s[i]=c;
           c++;
       }
       int k=0;
       while(n!=0)
       {
         cout<<s[k];
          k++;
         if(k==b)
         {
             k=0;
         }
         n--;;

       }
       cout<<endl;
       t--;
   }
    return 0;
}
