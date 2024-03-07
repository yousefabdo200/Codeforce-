#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        long long int r=1;
        int n , s=INT_MAX;
        cin>>n;
        int arr[n];
        int x=0;
        for(int i=0 ; i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<s)
            {
                s=arr[i];
                x=i;
            }
        }
      ++arr[x];
        for(int i=0 ; i<n;i++)
        {
            r*=arr[i];
        }
        cout<<r<<endl;
    }
    return 0;
}
