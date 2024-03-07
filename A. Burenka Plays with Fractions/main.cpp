#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   double a,b,c,d;
    int r=0;
    while(t!=0)
    {
        cin>>a>>b>>c>>d;
        if(float(a/b)==float(c/d))
        {
            cout<<0<<endl;
        }
        else if(a==0||c==0)
        {
            cout<<1<<endl;
        }else
        {
            long long int s2=b*d;
            if(a/b>c/d)
            {
                long long int s1=(c*d)-(b*c);
                int s3=__gcd(s1, s2);
                if(s2/s3!=d)
                {
                    r++;
                }
            }
            else
            {
                long long int s1=(c*d);
                s1-=(b*c);
                long long int s3=__gcd(s1, s2);
                //cout<<s3;
                 if(s2/s3>b)
                {
                    r++;
                }
            }
            r++;
        cout<<r<<endl;
            r=0;

        }
        t--;
    }
    return 0;
}
