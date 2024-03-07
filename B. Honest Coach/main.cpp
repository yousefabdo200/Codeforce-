#include <iostream>
#include<bits/stdc++.h>
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
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int m=INT_MAX;
       sort(arr,arr+n);
      for(int i=0;i<n-1;i++)
       {
           m=min(m,abs(arr[i]-arr[i+1]));
           if(m==0)
           {
               break;
           }
       }
       cout<<m<<endl;
   }
    return 0;
}
