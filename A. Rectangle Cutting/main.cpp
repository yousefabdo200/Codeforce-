#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a%2&&b%2)
        {
            cout<<"NO"<<endl;
        }
        else if(a%2==0&&b%2)
        {
            if(a/2==b)
                 cout<<"NO"<<endl;
            else
                 cout<<"YES"<<endl;
        }
        else if(a%2&&b%2==0)
        {
            if(b/2==a)
                 cout<<"NO"<<endl;
            else
                 cout<<"YES"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
