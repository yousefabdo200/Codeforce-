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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        string r="YES";
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i]||a[i]+1==b[i])
            {
                continue;
            }
            else
            {
                r="NO";
                break;
            }
        }
        cout<<r<<endl;
        t--;
    }
    return 0;
}
