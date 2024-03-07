#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int min =INT_MAX;
    int max=INT_MIN;
    int mind=0;
    int mxind=0;
    int arr[n];
    for(int i=0 ;i<n ;i++)
    {

       cin>>arr[i];
       if(arr[i]>max)
       {
           max=arr[i];
           mxind=i;
       }
       if(min>=arr[i])
       {
           min=arr[i];
           mind=i;
       }
    }
    if(arr[0]!=max||arr[n-1]!=min)
    {
        if(arr[0]!=max || arr[n-1]!=min)
    {
        if(mxind>mind)
            mind++;
        int steps=mxind+n-1-mind;
        cout<<steps;

    }
    }else{
        cout<<0;
    }
    return 0;
}
