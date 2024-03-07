#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int l,q;
        int p=0;int m=0;
        for(int i=1;i<=n;i++)
        {
            cin>>l>>q;
            if(l<=10)
            {
               if(q>m)
               {
                   m=q;
                   p=i;
               }
            }
        }
        cout<<p<<endl;
    }
    return 0;
}
