#include <iostream>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int f, t;
    long long int mf,mx=INT_MIN;
    while(n!=0)
    {
        cin>>f>>t;
        if(t>k)
        {
            mf=f-(t-k);
        }
        else
        {
            mf=f;
        }

        if(mx<mf)
        {
            mx=mf;
        }

        n--;
    }
    cout<<mx;
    return 0;
}
