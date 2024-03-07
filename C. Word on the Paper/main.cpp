#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char c;
    while(t--)
    {
        vector<char>v;
        for(int i=0;i<8;i++)
        {
            for(int x=0;x<8;x++)
            {
                cin>>c;
                if(c!='.')
                {
                   v.push_back(c);
                }
            }
        }
        for (char element : v)
        {
            cout << element;
        }
        cout << endl;
        cout<<endl;
    }
    return 0;
}
