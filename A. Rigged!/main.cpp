#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t!=0)
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    long long int w=arr[0][0];
    int s=arr[0][1];
    int r=w;
     for(int i=1;i<n;i++)
    {
        if(arr[i][0]>=w)
       {
           if(arr[i][1]>=s)
           {
               r=-1;
               break;
           }
       }
    }
    cout<<r<<endl;
    t--;
}
    return 0;
}
