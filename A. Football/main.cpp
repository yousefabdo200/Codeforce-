#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int num;
    if(n%2==0)
    {
        num= n/2;
    }
    else{
        num= (n/2)+1;
    }
    for(int i=0;i<n;i++)
    {
        int c1=0;
        for(int x=0;x<n;x++)
        {
            if(arr[i]==arr[x])
            {
                c1++;
            }
        }
        if(c1>=num)
        {
            cout<<arr[i];
            break;
        }
    }
    return 0;
}
