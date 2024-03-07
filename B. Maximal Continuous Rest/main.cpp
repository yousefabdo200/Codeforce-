#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int i=0,x=n-1;
   int r=0;
   while(arr[i]==1)
   {
       r++;
       i++;
   }
    while(arr[x]==1)
   {
       r++;
       x--;
   }
   int c=0;
   for( i;i<x;i++)
   {
       if(arr[i]==1)
       {
           ++c;
           r=max(c,r);
       }
       else{
        c=0;
       }
   }
   cout<<r;
    return 0;
}
