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
       kc=k;
       nc=n;
       int arr[n];
       for(int x=0;x<n;x++)
       {
           cin>>arr[x];
       }
    int p=fnot(arr,n);
       if(p==-1)
       {
           //int p=fnot(arr,n);
           cout<<0<<endl;
       }
       else{

            while(p!=-1)
            {
                for(int x=p;x<n-1;x++)
                {
                    if(arr[x]-x>1)
                    {
                        swap(arr[x],arr[x+1]);
                    }
                    else if(arr[x]-x<1)
                    {
                        swap(arr[x],arr[x-1]);
                    }
                    else if(arr[x]-x==1)
                        break;
                }
                p=fnot(arr,n);
                kc--;
                if(kc==0)
                {
                    c++;
                    kc=k;
                }else if(kc>0&&p==-1)
                {
                    c++;
                    break;
                }
                }

            cout<<c<<endl;
            c=0;
            r1=0;
            }


       }
    return 0;
}
/*
for(int x=0;x<n;x++)
                {
                    cout<<arr[x]<<endl;
                }
                cout<<"     ***************************     "<<endl;
6 6
3 5 2 1 6 4
6 6
5 2 3 4 6 1
6 4
5 6 4 3 2 1
6 5
3 2 5 6 1 4
6 1
1 5 4 6 2 3
6 4
6 5 3 1 2 4
6 1
3 4 5 2 6 1
6 4
1 6 4 2 5 3
6 6
1 3 6 4 5 2
6 5
4 3 6 2 5 1

1
1
2
1
3
1
5
1
1
1
*/
