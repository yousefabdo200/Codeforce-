#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        long long int n,c1,c2;
        cin>>n;
        int m=n%3;
        n-=m;
        c1=n/3;
        c2=n/3;
        if(m==1)
        {
            cout<<c1+1<<" "<<c2<<endl;
        }
        else if(m==2)
        {
            cout<<c1<<" "<<c2+1<<endl;

        }
        else
        {
            cout<<c1<<" "<<c2<<endl;
        }
    }
    return 0;
}
