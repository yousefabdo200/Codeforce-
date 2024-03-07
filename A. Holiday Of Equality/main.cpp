#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int m=INT_MIN;
    int count=0;
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        count+=m-arr[i];
    }
    cout<<count;
    return 0;
}
