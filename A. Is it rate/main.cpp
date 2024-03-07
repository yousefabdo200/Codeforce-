#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int x=0 ;x<2;x++)
        {
            cin>>arr[i][x];
        }
    }
    bool r=true;
    bool r2=true;
    for(int i=0;i<n;i++)
    {
        int v=arr[i][0];
        for(int x=0 ;x<=2;x++)
        {
            if(arr[i][0]!=arr[i][1])
            {
                r=false;
                cout<<"rated";
                break;
            }
        }
        if(r==false)
        {
            break;
        }
        if(v<arr[i+1][0] &&i<n-1)
        {
            r2=false;
        }
        if(r2==false && i==n-1)
        {
            cout<<"unrated";
            break;
        }
        else if(r2==true && i==n-1)
        {
            cout<<"maybe";
            break;
        }}
    return 0;
}
