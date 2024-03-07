#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        vector <long long int >v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        if(v[2]==v[0]+v[1])
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
        t--;
    }
    return 0;
}
