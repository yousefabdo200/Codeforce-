#include <iostream>

using namespace std;

int main()
{
    long long int n ,m;
    cin>>n>>m;
    if(n==m)
    {
        cout<<0<<endl;
    }
    else if(m%n!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        long long int d=m/n;
        int ans=0;
        while(d%2==0)
        {
            d/=2;
            ans++;
        }
       while(d%3==0)
        {
            d/=3;
            ans++;
        }
        if(d!=1)
        {
            cout<<-1;
        }
        else{
            cout<<ans;
        }
    }

    return 0;
}
