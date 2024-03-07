#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin>>c;
    int r;
    cin>>r;
    string b="",g="";
    for(int i=1 ;i<=r ;i++)
    {
        b+="#";
        if(i!=r)
        {
            g+=".";
        }else{
            g+="#";
        }
    }
    for(int i=1;i<=c;i++)
    {
        if(i%2==0)
        {
            cout<<g<<endl;
            reverse(g.begin(),g.end());
        }
        else
            cout<<b<<endl;
    }
    return 0;
}
