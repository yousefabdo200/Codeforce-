#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int num;
    int x=0;
    int c=0;
    string s;
    for(int i=0;i<t;i++)
    {
        cin>>num;
        x=num%10-1;
        c+=x*10;
        s=to_string(num);
        for(int x=1;x<=s.length();x++)
        {
            c+=x;
        }
        cout<<c<<endl;
        c=0;
    }
    return 0;
}
