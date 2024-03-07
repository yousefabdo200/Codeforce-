#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long x,y;
        cin>>x>>y;
        cout<<(y%x)+(y/x)<<endl;
        t--;
    }
    return 0;
}
