#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int m=0;
    int x=0;
    while (i<n){
        if(i==0)
        {
            m=arr[i+1];
            x=arr[n-1];
            cout<<abs(arr[i]-m)<<" "<<abs(arr[i]-x)<<endl;
        }
        else if(i==n-1){
            x=arr[0];
            m=arr[i-1];
            cout<<abs(arr[i]-m)<<" "<<abs(arr[i]-x)<<endl;
        }
        else{
            if(abs(arr[i]-arr[i-1])<abs(arr[i]-arr[i+1]))
            {
                m=abs(arr[i]-arr[i-1]);
            }
            else
            {
                 m=abs(arr[i]-arr[i+1]);
            }
            if(abs(arr[i]-arr[0])>abs(arr[i]-arr[n-1]))
            {
                x=abs(arr[i]-arr[0]);
            }
            else{
                x=abs(arr[i]-arr[n-1]);
            }
            cout<<m<<" "<<x<<endl;
        }
        i++;
    }
    return 0;
}
