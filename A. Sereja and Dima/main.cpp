#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int left=0 ,right=n-1;
    int s=0,d=0;
 for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
       int c=i+1;
       if(c%2!=0)
       {
           if(arr[left]>arr[right])
           {
               s+=arr[left];
               left++;
           }
           else if(arr[left]<=arr[right]){
            s+=arr[right];
               right--;
           }

       }
       else if (c%2==0){
        if(arr[left]>arr[right])
           {
               d+=arr[left];
               left++;
           }
        else if(arr[left]<=arr[right]){
        d+=arr[right];
           right--;
       }
    }}
    cout<<s<<" "<< d;
    return 0;
}
