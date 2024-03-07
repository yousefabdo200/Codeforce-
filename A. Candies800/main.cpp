#include <iostream>

using namespace std;

int main()
{
       int n , f;
       cin>>n>>f;
       int re=n%f;


       for(int i=1;i<=f;i++)
       {
           int num=n/f;
           if(re!=0)
           {
               if(i>f-re)
               {
                   num++;
               }
           }

           cout<<num<<" ";
       }
       cout<<endl;
    return 0;
}
