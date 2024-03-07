#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int a,b,c,d;
    int co=0;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        if(b>a)
            co++;
        if(c>a)
            co++;
        if(d>a)
            co++;
        cout<<co<<endl;
        co=0;

    }

    return 0;
}
