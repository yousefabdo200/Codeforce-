#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n ,sum=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        int avr=sum/n;
        sum=0;
        string r="YES";
        if(n==1)
            cout<<r<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(v[i]>=avr)
                {
                    sum+=v[i]-avr;
                }
                else
                {
                    if(sum<=0||sum<avr-v[i])
                    {
                        r="NO";
                        break;
                    }
                    sum-=avr-v[i];
                }
            }
             cout<<r<<endl;
        }
    }
    return 0;
}
