#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    for (int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for (int i=0;i<4;i++)
    {
        for(int x=i+1;x<4;x++)
        {
            if(arr[i]==arr[x] and i!=x)
            {
                count++;
                break;
            }
        }
    }
    cout<<count;


    return 0;
}
