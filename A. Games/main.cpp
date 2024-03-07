#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    int  host=0 ,gust=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int x=0 ;x<2;x++)
        {
            cin>>arr[i][x];
        }
    }
    host=arr[0][0];
    gust=arr[0][1];
    for(int i=0;i<n;i++)
    {
        for(int x=0 ;x<n;x++)
        {
            if(arr[i][0]==arr[x][1])
            {
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}
