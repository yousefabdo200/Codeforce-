#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    string result="YES";
    char c=arr[0][1];
    char main=arr[0][0];
    int l=0,r=n-1;
    int i=0;
    for(;i<(n-1)/2;i++)
    {
        if(arr[i][r]==arr[i][l]&arr[i][r]!=c)
        {
            for(int x=l+1;x<r;x++)
            {
                if(arr[i][x]!=c)
                {
                    result="NO";
                }
            }
        }
        else
        {
            result="NO";
            break;
        }
        l++;
        r--;
    }
     l=0,r=n-1;
     while(r!=l)
     {
         if(arr[i][r]!=c||arr[i][l]!=c)
         {
             result="NO";
             break;
         }
         r--;
         l++;
     }
     if(arr[i][(n-1)/2]!=main)
     {
         result="NO";
     }
     ++i;
     l=((n-1)/2)-1 , r=((n-1)/2)+1;
     if(result=="YES")
     {
         for(;i<n;i++)
    {
        if(arr[i][r]==arr[i][l]&arr[i][r]!=c)
        {
            for(int x=l+1;x<r;x++)
            {
                if(arr[i][x]!=c)
                {
                    result="NO";
                }
            }
        }
        else
        {
            result="NO";
            break;
        }
        l--;
        r++;
    }
     }
    cout<<result;

    return 0;
}
