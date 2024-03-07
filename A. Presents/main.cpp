#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int count =0;
    int f=1;
    for(int x=0;x<n;x++)
    {
        if(arr[x]==f)
       {
           cout<<x+1<<" ";
           f++;
           count++;
           x=-1;
        if(count>n)
       {

           break;
       }
       }
    }
    return 0;
}
