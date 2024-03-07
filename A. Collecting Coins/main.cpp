#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        long long int a,b,d,n;
        cin>>a>>b>>d>>n;
        long long int c=a+b+d;
        long long int m=max(a,b);
        m=max(m,d);
        m*=3;
        long long r=m-c;
        c+=r;
        n-=r;
        if(n<0||n%3!=0||c!=m)
        {
            cout<<"NO"<<endl;
        }
        else if(n%3==0)
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
