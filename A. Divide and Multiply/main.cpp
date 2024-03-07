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
        long long int c=0;
        cin>>n;
        vector <long long int>v;
        long long int x=0;
        long long int num;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            v.push_back(num);
            while(v[i]%2==0)
            {
                x++;
                v[i]=v[i]/2;
            }
            c+=v[i];
        }
        sort(v.begin(),v.end());
        num=v[n-1];
        c-=v[n-1];
        while(x!=0)
        {
            x--;
            num*=2;
        }
        c+=num;
        cout<<c<<endl;
        t--;
    }
    return 0;
}
