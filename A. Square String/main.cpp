#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        cin>>s;
        int n;
        n=s.length();
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool r=true;
            for(int i=0;i<n/2;i++)
            {
                if(s[i]!=s[i+n/2])
                {
                    r=false;
                    break;
                }
            }
            if(r)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        t--;
    }
    return 0;
}
