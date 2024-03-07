#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int n;
        cin>>n;
        if(n<=3)
        {
            cout<<1<<endl;
        }
        else
        {
            if(n%2!=0)
        {
            --n;
        }
            cout<<(n/2)<<endl;
        }
        t--;
    }
    return 0;
}
