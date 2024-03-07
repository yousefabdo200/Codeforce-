#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        if(arr[i][1]>arr[i][0])
        {
            cout<<arr[i][1]-arr[i][0]<<endl;
        }
        else if(arr[i][0]%arr[i][1]==0){
            cout<<0<<endl;
        }
        else{
            int s=arr[i][1]-(arr[i][0]%arr[i][1]);
            cout<<s<<endl;
            }
    }

    return 0;
}
