#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int x=0;x<n;x++)
        {
            if(n%2!=0)
            {
                cout<<1<<" ";
            }
            else
            {
                if(x==0)
                {
                    cout<<1<<" ";
                }
                else if(x==1)
                {
                    cout<<2<<" ";
                }
                else{
                    cout<<3<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
