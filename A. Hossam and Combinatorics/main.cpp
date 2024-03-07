#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;

    long long int n;
    long long int c=0;
   int ab=0;
   for(int i=0;i<t;i++)
   {
       cin>>n;
       int arr[n];
       for(int x=0;x<n;x++)
       {
           cin>>arr[x];
       }
       sort(arr,arr+n);
       ab=arr[n-1]-arr[0];
       string s;
       if(arr[0]==arr[n-1])
       {
           c=n-1;
           c*=n;
           cout<<c<<endl;
       }
       else{
        for(int x=0;x<n;x++)
           {
               for(int z=n-1;z>=0;z--)
               {
                   if(arr[z]-arr[x]==ab)
                   {
                       c+=2;
                   }else{
                        break;
                   }
               }
               if(arr[x]!=arr[x+1])
               {
                   break;
               }
           }
           cout<<c<<endl;
       }


        c=0;
   }

    return 0;
}
