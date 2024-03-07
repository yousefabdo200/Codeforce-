#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int o=0,z=0;
        long long int num;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(num==1)
            {
                o++;
            }
            else if(num==0)
            {
                z++;
            }
        }
       cout<<o*(1LL<<z)<<"\n";
       t--;
    }

    return 0;
}
