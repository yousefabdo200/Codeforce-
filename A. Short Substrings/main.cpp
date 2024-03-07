#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s ,t="";
    char c=' ';
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s.length()==2)
        {
            t=s;
        }
        //bbba
        else{
             for(int x=0;x<s.length();x++)
             {
                 if(c==' '||c!=s[x])
                 {
                     c=s[x];
                     t+=s[x];
                     if(s[0]==s[1])
                     {
                         t+=s[x];
                         s[0]=0;
                         x++;
                     }

                 }else if(c==s[x])
                 {
                     c=' ';
                 }
             }
        }
       cout<<t<<endl;
        t="";
        c=' ';
    }
    return 0;
}
