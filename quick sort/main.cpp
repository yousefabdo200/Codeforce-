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
int fmax(int*arr,int n)
{
    int p=0;
    int m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=m)
        {
            m=arr[i];
            p=i;
        }
    }
    return p;
}
int main()
{
   int t;
   cin>>t;
   int n,k;
   int kc;
   int c=0;
   int nc;
   int m=INT_MIN;
   for(int i=0;i<t;i++)
   {
       cin>>n>>k;
       kc=k;
       nc=n;
       int arr[n];
       int r1=0;
       for(int x=0;x<n;x++)
       {
           cin>>arr[x];
           if(x>0&&arr[x]-arr[x-1]==1)
           {
               r1++;
           }
       }
       if(r1==n-1)
       {
           cout<<0<<endl;
       }
       else{
            bool r=sorting(n,arr);
            int p=fmax(arr,n);
            while(kc!=0)
                {
                    int p=fmax(arr,n);
                    for(int x=p;x<n-1;x++)
                    {
                        swap(arr[x],arr[x+1]);
                    }
                    kc--;
                    n--;
                    if(kc==0)
                    {
                        if(r=sorting(n,arr))
                        {
                             c++;
                             break;
                        }
                        else{
                            {
                            kc=k;
                            c++;
                            }
                        }
                    }

                }
                cout<<c<<endl;
                c=0;
            }
            r1=0;
       }
    return 0;
}
