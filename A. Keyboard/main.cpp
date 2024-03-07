#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./",s2;
    char c;
    cin>>c;
    cin>>s2;//s;;upimrrfod;pbr
    for(int i=0 ;i<s2.length();i++)
    {
        for(int x=0 ;x<s1.length();x++)
        {
            if(c=='R')
            {
                if(s2[i]==s1[x])
                {
                    cout<<s1[x-1];
                }
            }
            else if(c=='L')
            {
                if(s2[i]==s1[x])
                {
                    cout<<s1[x+1];
                }
            }
        }
    }
    return 0;
}
