#include <iostream>
# include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=1 ;i<n;i++)
    {

        if(arr[0]<arr[i] && arr[i]<arr[n-1])
        {
            c++;
        }

    }

    cout<<c;
    return 0;
}
