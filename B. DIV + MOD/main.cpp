#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t!=0)
    {
        long long int l ,r, a,x=0;
        cin>>l>>r>>a;
        if(a==1)
        {
            cout<<r<<endl;
        }
        else
        {
            if(r%a==0)
            {
                if(l==r)
                {
                    x=r;
                }
                else
                {
                    x=r-1;
                }
            }
            else
            {
                if(r-(r%a)-1>=l)
                {
                    x=r-(r%a)-1;
                }
                else
                {
                    x=r;
                }
                /*
                if(r-(r%a)-1>=l){
                x=r-(r%a)-1;
            }
            else{
                x=r;
            }
                */
            }
            long long int ans ,ans2;
            ans=(x/a)+(x%a);
            ans2=(r/a)+(r%a);
            cout<<max(ans,ans2)<<endl;
        }


        t--;
    }
    return 0;
}
