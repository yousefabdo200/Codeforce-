#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n] ;
    int q[n];
    int coun=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        cin>>q[i];
        if((q[i]-p[i])>=2)
        {
            coun++;
        }
    }
    cout<<coun;
    return 0;
}
