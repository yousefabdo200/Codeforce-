#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n;
    int x,y,s=0;
    int g,p,r;
    while(t!=0)
    {
        cin>>n>>x>>y;
        if(x==y||(x>0&y>0))
        {
            cout<<-1<<endl;
        }
        else
        {
            if(x==0)
            {
                s=y;
            }
            else
            {
                s=x;
            }

            if((n-1)%s==0)
            {
                for(int i=1;i<n;i+=s)
                {
                    for(int z=0;z<s;z++)
                    {
                        cout<<i+1<<" ";
                    }
                }
                cout<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        t--;
    }
    return 0;
}
