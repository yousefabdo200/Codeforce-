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
        map<long long int ,long long int> m;
        //map<long long int ,long long int> ::iterator it=m.begin();
        long long int num;
        long long int ma=0;
        int c=0;
        for(int i=0 ;i<n;i++)
        {
            cin>>num;
            m[num]++;
            ma=max(ma,m[num]);
        }
        //cout << ma<<endl;
        n-=ma;
        c=n;
        while(n>0)
        {
            c++;
            n-=ma;
            ma*=2;
        }
        cout<<c<<endl;
        t--;
    }
    return 0;
}
