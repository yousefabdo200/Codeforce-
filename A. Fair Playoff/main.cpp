#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int arr1[2],arr2[2];
        cin>>arr1[0]>>arr1[1]>>arr2[0]>>arr2[1];
        if(arr1[0]>arr1[1])
        {
            swap(arr1[0],arr1[1]);
        }

        if(arr2[0]>arr2[1])
        {
            swap(arr2[0],arr2[1]);
        }
        if(arr1[1]>arr2[0]&&arr2[1]>arr1[0])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
