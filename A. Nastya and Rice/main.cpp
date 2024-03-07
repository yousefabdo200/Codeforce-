#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       int a,b,c,d,n;
       cin>>n>>a>>b>>c>>d;
       int rs=abs(a-b);
       int rm=a+b;
       int ps=abs(c-d);
       int pm=c+d;
       string r="NO";
       for(int i=rs;i<=rm;i++)
       {
           if(i*n<=pm)
           {
               if(i*n>=ps)
               {
                   r="YES";
                    break;
               }
           }
       }
       cout<<r<<endl;
       t--;
   }
    return 0;
}
