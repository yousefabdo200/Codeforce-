#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>s;
        int num;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            s.insert(num);
        }
        if(s.size()!=n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
