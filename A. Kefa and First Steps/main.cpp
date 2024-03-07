#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=1,l=1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)
        {
            if(arr[i]>=arr[i-1])
            {
                l++;
                m=max(l,m);
            }
            else
            {
                l=1;
            }
        }
    }
      cout<<m;
    return 0;
}
