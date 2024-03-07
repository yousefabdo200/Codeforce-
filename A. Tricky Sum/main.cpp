#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       long long int n ;
       cin>>n;
       long long int  r=n*(n+1)/2;
       long long int pow=1;
       while(pow<=n)
       {
            r-=2*pow;
            pow*=2;
       }
       cout<<r<<endl;
       t--;
   }
    return 0;
}
