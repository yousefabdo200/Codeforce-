#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int m;
    while(t!=0)
    {
        cin>>n;
        m=n;
        int a=1,b=n*3;
        if(n%2==0)
        {
            m=n/2;
            cout<<m<<endl;
            for(int i=0;i<m;i++)
            {
                cout<<a<<" "<<b<<endl;
                a+=3;
                b-=3;
            }
        }
        else
        {
            m=n/2+(n%2);
            cout<<m<<endl;
            if(n>1)
            {
                for(int i=0;i<m;i++)
                {
                    if(b-a==2)
                    {
                       cout<<a<<" "<<b<<endl;
                       break;
                    }
                     cout<<a<<" "<<b<<endl;
                        a+=3;
                        b-=3;
                }
            }
            else
            {
                 cout<<1<<" "<<2<<endl;
            }
        }
        m=0;
        t--;
    }
    return 0;
}
