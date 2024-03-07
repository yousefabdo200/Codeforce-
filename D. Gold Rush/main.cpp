#include <iostream>

using namespace std;
bool ch(long long int n,long long int m)
{

    if(m==n)return true;
    if(m>n||n%3!=0) return false;
    return ch(n/3,m) ||ch(n-n/3,m);
}
void solve()
{
    long long n,m;
    cin>>n>>m;
    ch(n,m)==true?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        solve();
    }
    return 0;
}
