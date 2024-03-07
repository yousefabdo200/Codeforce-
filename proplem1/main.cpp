#include <iostream>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int arr[n];
    int count=0;
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ;i<n;i++)
    {
        if(arr[i]<=l)
        {
            count++;
        }
        else
        {
            count+=2;
        }
    }
    cout<<count;

}

