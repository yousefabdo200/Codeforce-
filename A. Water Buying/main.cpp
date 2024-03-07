#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int n ,a,b, c=0;
       cin>>n>>a>>b;
       if(a< float(b)/2)
       {
           c=n*a;
       }
       else
       {

           c=(n/2)*b;
           if(n%2)
           {
               c+=a;
           }
       }
       cout<<c<<endl;
   }
    return 0;
}
