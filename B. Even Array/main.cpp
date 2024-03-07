#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin>>p;
    int n;
    int r=0;
    int l=0;
    for(int i=0;i<p;i++)
    {
        cin>>n;
        int arr[n];
        int arr2[n];
        for(int x=0;x<n;x++)
        {
            cin>>arr[x];

        }
        for(int x=0;x<n;x++)
        {
            if(arr[x]==arr[x+1])
            {
                l++;
            }


            if(arr[x]%2!=x%2)
            {
                r++;
            }
        }
        if (r%2!=0 || (l==n-1 && n>1))
        {
            cout<<-1<<endl;
        }
        else{
            cout<<r/2<<endl;
        }
        r=0;
        l=0;
    }
    return 0;
}
