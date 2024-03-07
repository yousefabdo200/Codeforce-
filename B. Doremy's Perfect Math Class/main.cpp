#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fm(int*arr,int n,int m)
{
    for(int i=1;i<n;i++)
    {
        int s= INT_MAX;
         if(arr[i]%m==1)
         {
             s=1;
             return s;
         }
         else
         {
             if(arr[n-1]%m==0 &&arr[n-1]/m==m )
             {
                s=0;
               return s;
             }
             else{

                    return s;
                }
         }

}
}
int main()
{
   int t;
   cin>>t;
   int n;
   int r=0;
   for(int x=0;x<t;x++)
   {
       cin>>n;
       int arr[n];
       int ans;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           if(i==1)
           {
               ans=__gcd(arr[0], arr[1]);
           }
           else if(i>1)
           {
               ans=__gcd(ans,arr[i]);
           }

       }
        cout<<arr[n-1]/ans<<endl;
       }

    return 0;
}
/*
7
1 5 6 7 9 10 13
4
3 5 8 10
7
3 6 7 8 10 12 13
3
1 4 8
6
3 7 8 10 11 12
5
2 4 5 10 11
6
3 4 5 7 12 13
9
1 2 3 4 6 9 10 11 12
7
1 3 5 8 9 12 13
7
1 2 5 6 9 12 13
6
3 6 8 9 10 13
7
3 4 6 7 8 9 12
8
1 2 4 6 8 9 10 11
7
2 3 5 6 9 12 13
9
1 3 4 6 7 8 10 11 12
10
1 2 4 5 6 7 8 9 10 13
5
2 3 9 10 13
5
4 6 9 10 11
3
6 7 9
4
5 7 10 13
7
2 5 6 8 9 10 13
9
1 2 5 6 8 9 10 12 13
10
1 3 5 6 7 8 9 11 12 13
5
1 3 4 11 12
7
2 3 5 8 9 10 13
5
4 8 10 11 13
*/
