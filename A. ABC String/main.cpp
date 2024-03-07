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
        int n=s.length();
        if(s[0]==s[n-1])
        {
            cout<<"NO"<<endl;
        }
        else
        {


            string r="(";
            int x=1,y=0;
            int p=0;
            for(int i=1;i<n;i++)
            {
                if(s[i]==s[i-1])
                {
                    if(r[p]==')')
                    {
                        r+=')';
                        y++;
                    }

                    else
                    {
                        r+='(';
                        x++;
                    }
                }
                else
                {
                    if(r[p]==')')
                    {
                        r+='(';
                        x++;
                    }

                    else
                    {
                        r+=')';
                        y++;
                    }
                }
                p++;
            }
            if(r[0]!=r[p]&&x==y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
             //cout<<x<<" "<<y<<endl;
        }

        t--;
    }
    return 0;
}
