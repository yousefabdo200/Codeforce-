#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1]={0};
    int m=n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr[num]=1;
        while(arr[m])
        {
            cout<<m<<" ";
            m--;
        }
        cout<<endl;
    }
    return 0;
}
