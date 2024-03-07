#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    string r="YES";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        int arr[x];
        for(int z=0 ; z<x;z++)
        {
            cin>>arr[z];
        }
        sort(arr,arr+x);
        for(int y=0;y<x-1;y++)
        {
            if(arr[y+1]-arr[y]<=1 || x==1)
            {
                r="YES";
            }
            else{
                r="NO";
                break;
            }
        }
        cout<<r<<endl;
        r="YES";
    }
    return 0;
}
