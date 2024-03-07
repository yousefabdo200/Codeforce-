#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string name="Timur";
    while(t!=0)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string r="YES";
       sort(s.begin() , s.end());
        sort(name.begin(),name.end());
        if(s==name)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
        t--;

    }
    return 0;
}
