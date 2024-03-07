#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       long long int n;
       cin>>n;
       long long int a=1,b=0;
       --n;
       int c=0;
       int i=2;
       while(n>=i)
       {
           ++c;
           if(c<=2)
           {
               b+=i;
           }
           else
           {
               a+=i;
               if(c==4)
               {
                   c=0;
               }
           }
           n-=i;
           i++;
       }
       if(n!=0)
       {
           ++c;
            if(c<=2)
           {
               b+=n;
           }
           else
           {
               a+=n;
           }
       }
       cout<<a<<" "<<b<<endl;
       t--;
   }
    return 0;
}
