#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
      long long int n,c;
       cin>>n>>c;
      long long int arr[n];
      //long long int arr2[i];
       for(int i=0;i<n;i++ )
       {
           cin>>arr[i];
       }
       int i=0;
       if(n>=c)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           sort(arr,arr+n);
           c-=n;
           for(int i=1;i<n;i++)
           {
               c-=max(arr[i],arr[i-1]);
           }
           c-=max(arr[0],arr[n-1]);
           //cout<<" c"<<c<<endl;


        if(c>=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       }
       t--;
   }
    return 0;
}
