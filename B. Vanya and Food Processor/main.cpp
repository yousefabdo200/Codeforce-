#include <iostream>

using namespace std;
int main()
{
    long long int n,h,k;
    cin>>n>>h>>k;
     long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int curent=0, m=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+curent>h)
        {
            m+=curent/k;
            curent=curent%k;
            if(arr[i]+curent>h)
            {
                curent=arr[i];
                m++;
            }
            else
            {
                 curent+=arr[i];
            }
        }
        else
        {
            curent+=arr[i];
        }
    }
    m+=(curent/k);
      if(curent%k>0)
    {
        m++;
    }
    cout <<m;
    return 0;
}
