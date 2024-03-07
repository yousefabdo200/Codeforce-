#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int r=0;
    int arr[n];
    int p=0, m=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1||arr[i]==-1||arr[i]==0)
        {
            continue;
        }
        if(arr[i]>1)
        {
            r+=arr[i]-1;
            arr[i]=1;
        }
        else
        {
            r+=abs(arr[i]+1);
            arr[i]=-1;
        }
    }
     for(int i=0; i<n; i++){
        if(arr[i] == 0)z++;
        else if(arr[i] == -1)m++;
        else if(arr[i] == 1)p++;
    }
    r+=z;
     if(m % 2 == 1){
        if(z > 0)p--;
        else r+=2;
    }
    cout<<r;
    return 0;
}
