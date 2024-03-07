#include <iostream>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l/nl;
    int limts=c*d;
    int sold=p/np;
    int m=min(drink ,limts);
     m=min(m,sold);
     cout<<m/n;
    return 0;
}
