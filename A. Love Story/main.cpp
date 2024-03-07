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
        string tex="codeforces";
        int r=0;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=tex[i])
            {
                r++;
            }
        }
        t--;
        cout<<r<<endl;
    }
    return 0;
}
