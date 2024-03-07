#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        long long int x,n,m,N ,M ;
        cin>>x>>n>>m;
        M=m;
        N=n;
        long long int ans1 , ans2;
        ans1=x;
        ans2=x;
        string r="NO";
        while(n--&&ans1>0)
        {
            ans1=(ans1/2)+10;
            if(ans1<=0)
            {
                r="yes";
                break;
            }
        }
        while(m--&&ans1>0)
        {
            ans1=ans1-10;
            if(ans1<=0)
            {
                r="yes";
                break;
            }

        }
         while(M--&&ans2>0)
        {
            ans2=ans2-10;
            if(ans2<=0)
            {
                r="yes";
                break;
            }

        }
        while(N--&&ans2>0)
        {
            ans2=(ans2/2)+10;
            if(ans2<=0)
            {
                r="yes";
                break;
            }
        }

       cout<<r<<endl;
        }

    return 0;
}
