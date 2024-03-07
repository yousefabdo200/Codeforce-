#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<n*2;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+(2*n));
        int c=0;
        for(int i=0;i<(n)-1;i++)
        {
            c+=abs(arr[i]-arr[i+1]);
        }
        for(int i=n;i<(n*2)-1;i++)
        {
            c+=abs(arr[i]-arr[i+1]);
        }
         cout<<c<<endl;;
         for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" "<<arr[i+n]<<endl;
        }

        t--;
    }
    return 0;
}
