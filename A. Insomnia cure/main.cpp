#include <iostream>

using namespace std;

int main()
{
    int c=0;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    if(k==1||l==1||m==1||n==1)
    {
        cout<<d;
    }else if(d>=k||d>=l||d>=m||d>=n){

        for(int i=2;i<=d;i++)
        {
            if(d%i==0)
            {
                d=d/i;
                c+=d;
            }

        }
        cout<<c;
    }
    else{
        cout<<0;
    }

    return 0;
}
