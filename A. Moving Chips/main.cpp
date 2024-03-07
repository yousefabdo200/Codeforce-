#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int c=0;
       bool z=false;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           if(arr[i]==1)
            z=true;
           if(z)
           {
               if (arr[i]==0)
                c++;
           }
       }
        for(int i=n-1;i>=0;i--)
       {
           if(arr[i]==0)
            c--;
           else
               break;

       }
        cout<<c<<endl;
   }
    return 0;
}
