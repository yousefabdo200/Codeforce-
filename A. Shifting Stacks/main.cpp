#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        vector<long long int> v(n);
        for(int i=0;i<n;i++)
        {
           cin>>v[i];

        }
        string r="YES";
        long long int ex=0;
        for(int i=0;i<n;i++)
        {

            if(v[i]>=i)
            {
                ex+=v[i]-i;
            }
            else if(v[i]+ex>=i)
            {
                ex-=i-v[i];
            }
            else
            {
                r="NO";
            }
        }
        cout<<r<<endl;
        t--;
    }
    return 0;
}
