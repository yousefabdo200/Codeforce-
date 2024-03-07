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
        string x;
        cin>>x;
        set<char>s;
        for(int i=0; i<n;i++)
        {
            s.insert(x[i]);
        }
        int r=s.size()*2;
       r+=n-(r/2);
       cout<<r<<endl;
    }
    return 0;
}
