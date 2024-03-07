#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={3,5,7,0,10,9,4};
    cout<<"[";
    for(int i=0;i<(sizeof(arr)/4);i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    int min=arr[0];
    int temp=0;
    int index=0;
    for(int i=0;i<(sizeof(arr)/4);i++)
    {
        for(int x=i;x<(sizeof(arr)/4);x++)
        {
            if(arr[x]<min)
            {
                min=arr[x];
                index=x;
            }
        }
        temp=arr[i];
        arr[i]=min;
        arr[index]=temp;
        min=INT_MAX;
    }
    cout<<"[";
    for(int i=0;i<(sizeof(arr)/4);i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}
