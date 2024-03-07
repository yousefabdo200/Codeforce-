#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool sorting(int n , int*arr)
{
    int c=0;
    bool r;
    for(int x=0;x<n;x++)
       {

           if(x>0&&arr[x]-arr[x-1]!=1)
           {
               c++;
           }
       }
            if(c==0)
           {
               r= true;
           }
           else
           {
               r= false;
           }
           return r;
}
int fnot(int*arr,int n)
{
    int p=0;
    int m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i!=1)
        {
            return i;
        }
        else if(arr[i]-i==1&& i==n-1)
        {
            return -1;
        }
    }
}
int main()
{
   int t;
   cin>>t;
   int n,k;
   int kc;
   int c=0;
   int r1=0;
   int nc;
   int m=INT_MIN;
   for(int i=0;i<t;i++)
   {
       cin>>n>>k;
       kc=0;
       nc=n;
       int arr[n];
       for(int x=0;x<n;x++)
       {
           cin>>arr[x];
       }
       for(int x=0;x<n;x++)
       {
           if(arr[x]==c+1)
           {
               c++;
           }
       }
       kc=n-c;
            if(kc%k==0)
            {
                cout<<kc/k<<endl;
            }
            else
            {
                cout<<(kc/k)+1<<endl;
            }
            c=0;
            kc=0;
       }






    return 0;
}
