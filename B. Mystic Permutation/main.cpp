#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       int n;
       cin>>n;
       int arr[n],cop[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           cop[i]=arr[i];

       }
       if(n==1)
       {
           cout<<-1;
       }
       else
       {
           sort(cop,cop+n);
           for(int i=0;i<n-1;i++)
           {
               if(arr[i]==cop[i])
               {

                   swap(cop[i],cop[i+1]);

               }
           }
           if(arr[n-1]==cop[n-1])
           {

               swap(cop[n-1],cop[n-2]);

           }
           for(int i=0;i<n;i++)
       {
           cout<<cop[i]<<" ";

       }
       }

       cout<<endl;
       t--;
   }
    return 0;
}
