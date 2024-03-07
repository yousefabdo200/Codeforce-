#include <iostream>
using namespace std;
int main()
{
   int n ,b,d,o,counter=0,c=0;
   cin>>n>>b>>d;
   for(int i=0 ;i<n;i++)
   {
       cin>>o;
       if(o<=b)
       {
           counter+=o;
       }
       if(counter>d)
       {
           c++;
           counter=0;
       }
   }
   cout<<c;
    return 0;
}
