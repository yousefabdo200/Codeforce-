#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        long long int n;
        cin>>n;
        if(n%2020<=n/2020)
        {
            cout<<"YES"<<endl;
        }
        else{
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
