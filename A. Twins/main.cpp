#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        count+=arr[i];
    }
    sort(arr,arr+n);
    int coins=0;
    int x=0;
    for(int i=n-1;i>=0;i--)
{
    if(count>=x)
    {
        x+=arr[i];
        count-=arr[i];
        ++coins;
    }
    else if(x>count)
    {
        break;
    }
}
cout<<coins;


    return 0;
}
