#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            if(n&1)
            {
                cout<<-1<<endl;
            }
            else
            {
                for(int i=2;i<=n;i+=2)
                {
                    cout<<i<<" "<<i-1<<" ";
                }
                cout<<endl;
            }
        }
        t--;
    }
    return 0;
}
