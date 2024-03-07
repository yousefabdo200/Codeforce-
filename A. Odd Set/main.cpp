#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       t--;
       int n;
       cin>>n;
       int  e=0;
       int num;
       for(int i=0;i<2*n;i++)
       {
           cin>>num;
           if(num%2==0)
            e++;

       }
       if(e==n)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
    return 0;
}
