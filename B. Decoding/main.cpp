#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v;
    for(int i=n;i!=0;i--)
    {
        if((i)%2==1)
        {
            v.push_back(s[0]);
        }
        else
        {
            v.insert(v.begin(),s[0]);
        }
         s.erase(0,1);
    }
     for(int i=0;i<v.size();i++){
		  cout<<v[i];
	  }
    return 0;
}
