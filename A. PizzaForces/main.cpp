#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int n;

        cin>>n;
        if(n<=10)
        {
            if(n<=6)
            {
                cout<<15<<endl;
            }
            else if(n<=8)
            {
                cout<<20<<endl;
            }
            else if(n<=10)
            {
                cout<<25<<endl;
            }
        }
        else{
           long long int ans=(n/10)*25;
          long long int m=n%10;
           if(m)
            {
                if(m==1 || m==2)ans+=5;
                else if(m<5)ans+=10;
                else if(m<=6)ans+=15;
                else if(m<=8)ans+=20;
                else ans+=25;
            }
            cout<<ans<<endl;
        }
        t--;
    }
    return 0;
}
