#include <iostream>

using namespace std;

int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n%2)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            cout<<n<<" ";
            for(int i=1;i<=n-1;i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
