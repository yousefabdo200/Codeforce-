#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
       int arr[n];
        string r="YES";
        for(int i=0 ;i<n;i++)
        {
            cin>>arr[i];
            if(arr[0]!=1)
            {
                r="NO";
                //break;
            }
        }

        cout<<r<<endl;
        t--;
    }
    return 0;
}
