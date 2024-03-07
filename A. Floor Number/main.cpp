#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int n,x;
        cin>>n>>x;
         n-=2;
        int r=0;
        if(n<=0)
        {
            cout<<1<<endl;
        }
        else
        {

            ++r;
            if(n%x==0)
            {
                r+=n/x;
            }
            else
            {
                n-=n%x;
                r+=n/x;
                ++r;
            }
            cout<<r<<endl;
        }
        t--;
    }
    return 0;
}
