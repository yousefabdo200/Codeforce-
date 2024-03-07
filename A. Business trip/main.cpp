#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int k , n=12 ;
   cin>>k;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int c=0;
   int r=0;
   sort(arr,arr+n);
   for(int i=n-1;i>=0;i--)
   {
       if(c>=k)
       {
           break;
       }
       else
       {
           c+=arr[i];
           r++;
       }
   }
  if(c>=k)
       {
           cout<<r;
       }
       else
       {
           cout<<-1;
       }
    return 0;
}
