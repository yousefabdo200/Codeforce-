#include <iostream>

using namespace std;

int main()
{
    int n , k;
    cin>>n>>k;
    int m;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m+k<=5)
        {
            count++;
        }
    }
    if(count<3)
        cout<<0;
    else
        cout<<count/3;
    return 0;
}
