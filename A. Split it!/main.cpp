#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(2*k>=n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            string r="YES";
            int i=0;
            int l=n-1;
            while(i<k)
            {
                if(s[i]!=s[l])
                {
                    r="NO";
                    break;
                }
                i++;
                l--;
            }
            cout<<r<<endl;
        }
        t--;
    }
    return 0;
}
