#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long int >v(2*n);
        for(int i=0 ;i<2*n;i++)
            cin>>v[i];
        long long int c=0;
        sort(v.begin(), v.end());
        for(int i=0 ;i<2*n;i+=2)
            //cout<<v[i]<<" ";
            c+=v[i];
        cout<<c<<endl;
    }
    return 0;
}
