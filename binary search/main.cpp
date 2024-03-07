#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<"enter your value  ";
    cin>>n;
    int low=0,high=(sizeof(arr)/4)-1;
    while(low<=high)
    {

        int av=(low+high)/2;
        if(arr[av]>n)
        {
            high=av-1;
        }
        else if(arr[av]<n)
        {
            low=av+1;
        }
        else if(arr[av]==n)
        {
            cout<<"number is found";
            break;
        }
        else if(low==high==av)
        {
            cout<<"number is not found";

        }
    }
    return 0;
}
