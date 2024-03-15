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
       int num;
       int goals=0,scors=0;
       for(int i=0;i<n-1;i++)
       {
           cin>>num;
           goals+=abs(num);
           if(num>0)
            scors+=num*2;
       }
       cout<<goals-scors<<endl;
   }
    return 0;
}
