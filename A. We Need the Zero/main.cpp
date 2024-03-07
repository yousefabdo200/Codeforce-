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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x=0;
         for(int i=0;i<n;i++)
        {
            x^=arr[i];
        }
         for(int i=0;i<n;i++)
        {
           arr[i]^=x;
        }
        int y=0;
        for(int i=0;i<n;i++)
        {
            y^=arr[i];
        }
        if(y==0)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        t--;
    }
    return 0;
}
