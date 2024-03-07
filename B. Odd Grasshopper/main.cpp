#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int x,n;
        cin>>x>>n;
        int v=n%4;
        long long int r=x;
        long long int s=n-v+1;
        while(v!=0)
        {
            if(r%2==0)
            {
                r-=s;
            }
            else
            {
                r+=s;
            }
            s++;
            v--;
        }
        cout<<r<<endl;
        t--;
    }
    return 0;
}
