#include <iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    int arr[w];
    for(int i=0;i<w;i++)
    {
        cin>>arr[i];
    }
    int num;
    cin>>num;
    int index,value;
    for(int i=0;i<num;i++)
    {
        cin>>index>>value;
        index--;
            arr[index-1]+=abs(value-1);
            arr[index+1]+=abs(arr[index]-value);
            arr[index]=0;
    }
    for(int i=0;i<w;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
