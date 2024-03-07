#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    //cout <<t/2;
    while(t!=0)
    {
        int n;
        cin>>n;
        int c=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i=0;
        while(i<n-1)
        {
            if(arr[i]<arr[i+1])
            {
                i++;
            }
            else
            {
                c++;
                arr[i]=arr[i]/2;
                i=0;
            }
            if(arr[i]==0&&arr[i+1]==0)
            {
                c=-1;
                break;
            }
        }
        cout<<c<<endl;
        t--;
    }
    return 0;
}
