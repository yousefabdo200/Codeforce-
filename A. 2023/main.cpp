#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long num=1;
        for(int i=0;i<n;i++)
        {
            int r;
            cin>>r;
            num*=r;
        }
        if(num>2023||(num!=2023&k==0)||2023%num!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
             cout<<"YES"<<endl<<2023/num<<" ";
             --k;
            for(int i=0;i<k;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;

        }
    }
    return 0;
}
