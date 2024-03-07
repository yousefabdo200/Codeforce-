#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t;
   cin>>t;
   while(t!=0)
   {
       long long int num;
       cin>>num;
       if(num<10)
       {
           cout<<num<<endl;
       }
       else
       {
           long long coun=0;
           while(num>9)
           {
               coun+=num-(num%10);
               long long int x=num/10;
               num-=num-(num%10);
               num+=x;
           }
           coun+=num;
           cout<<coun<<endl;
       }
       t--;
   }
    return 0;
}
