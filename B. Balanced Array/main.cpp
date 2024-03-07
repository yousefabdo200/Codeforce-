#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int num;

   int e=2;
   int o=1;
   int c1=0;
   int c2=0;
   for(int i=0;i<n;i++)
   {
       cin>>num;
       if((num/2)%2!=0)
       {
           cout<<"NO"<<endl;
       }else{
           cout<<"YES"<<endl;
           while(e<=num)
           {
               cout<<e<<" ";
               c1+=e;
               e+=2;
           }
            while(o<=num)
            {
                if(num-o==1)
                {
                   cout<<c1-c2;
                   break;
                }
                cout<<o<<" ";
                c2+=o;
                o+=2;
            }
             cout<<endl;
       }
       e=2;
       o=1;
       c1=0;
       c2=0;

   }
    return 0;
}
