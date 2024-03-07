#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int a=-1,b=-1;
       for(int i=0;i<=n-1;i++)
       {
           if(s[i]=='B'&&a==-1)
            a=i;
           if(s[i]=='B')
           {
               b=i;
           }
       }
       cout<<b-a+1<<endl;
   }
    return 0;
}
