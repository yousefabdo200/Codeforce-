#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,x;
        cin>>n;
        x=n;
        string s;
        cin>>s;
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='*'&&s[i+1]=='*')
            {
                x=i;
                break;
            }
        }
        for(int i=0;i<x;i++)
        {
            if(s[i]=='@')
            {
                c++;
            }
        }
        cout<<c<<endl;

    }
    return 0;
}
