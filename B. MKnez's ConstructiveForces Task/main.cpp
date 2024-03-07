#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int l;
    int x=1;
    int b=0 , s=0;
    for(int i=0;i<t;i++)
    {
        cin>>l;
       if(l%2==0)
       {
           cout<<"YES"<<endl;
           for(int z=1;z<=l;z++)
           {
               if(z%2==0)
               {
                   cout<<-1<<" ";
               }else
               {
                   cout<<1<<" ";
               }
           }
           cout<<endl;
       }
       else
       {
           l-=2;
           if(l==1)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               cout<<"YES"<<endl;
               s=l/2;
               b=l-s;
               for(int z=1;z<=l+2;z++)
               {
                   if(z%2==0)
                   {
                       cout<<-1*b<<" ";
                   }else
                   {
                       cout<<s<<" ";
                   }
               }
           cout<<endl;
       }
    }
    }
    return 0;
}
