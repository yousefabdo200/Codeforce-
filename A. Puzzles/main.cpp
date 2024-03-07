#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n , x;
   cin>>n>>x;
   int arr[x];
   for(int i=0;i<x;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+x);
   int l=0,m=INT_MAX;
   int s=0;
   for(int i=n-1;i<x;i++)
   {
       l=arr[i]-arr[s];
      m=min(m,l);
      s++;
   }
    cout<<m<<endl;
    return 0;
}
