#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int r=0;
        string s;
        cin>>s;
        if(s=="_")
            r+=2;
        else if(s=="^")
        {
            r+=1;
        }
        else
        {
            int n=s.length();
            if(s[0]=='_')
                r++;
            if(s[n-1]=='_')
                r++;
            for(int i=0;i<n-1;i++)
            {
               if(s[i]=='_'&&s[i+1]=='_')
               {
                   r++;
               }
            }
        }
        cout<<r<<endl;
        t--;
    }
    return 0;
}
