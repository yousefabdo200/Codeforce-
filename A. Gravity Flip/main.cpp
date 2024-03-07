#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            if(arr[i]<arr[x])
            {
                swap(arr[x],arr[i]);
            }
        }
    }
    for(int i=0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
