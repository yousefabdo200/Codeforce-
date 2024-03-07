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
        map<char,int>m;
        for(char i='a';i<='z';i++)m[i]=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            for(auto it:m)
            {
                //cout<<it.first;

                if(it.second==v[i])
                {
                    cout<<it.first;
                    m[it.first]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
