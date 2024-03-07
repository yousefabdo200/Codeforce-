#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>v(n);
        string s;
        int p=0;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            int o=0;
            for(int x=0;x<n;x++)
            {
                if(s[x]=='1')
                {
                    o=1;
                    break;
                }
            }
            if(o==1)
            {
              v[p]=s;
              p++;
            }
        }
        int x=-1 ,y=-1,r=0;
        for(int i=0;i<n;i++)
        {
            if(v[0][i]=='1')
                r++;
            if(v[0][i]=='1'&&x==-1)
                x=i;
            if(v[0][i]=='1'&&y==-1&&(i==n-1||v[0][i+1]=='0'))
            {
                y=i;
                break;
            }
        }
        string q="SQUARE";
        for(int i=0;i<p;i++)
        {
            int c=0;
            for(int z=x;z<=y;z++)
            {
                if(v[i][z]=='1')
                {
                    c++;
                }
            }
            if(c!=r)
            {
                q="TRIANGLE";
                break;
            }
        }
        if(y==x&&p!=1)
             q="TRIANGLE";
        cout<<q<<endl;
    }
    return 0;
}
