#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1="",s2="";
        s1=s[0];
        int j=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                s1+=s[i];
            }
            else
            {
                j= i;
                break;
            }
        }

         for(;j<s.size();j++)
         {
            s2+=s[j];
         }

        long long int n1=stoi(s1);
        long long int n2=stoi(s2);
        if(n1>=n2)
            cout<<-1<<endl;
        else
            cout<<n1<<" "<<n2<<endl;


    }
    return 0;
}
