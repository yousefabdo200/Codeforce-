#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s ,t;
    cin>>s>>t;
    int len=t.length();
    int p=0;
    for(int i=0;i<len;i++)
    {
        if(t[i]==s[p])
        {
            p++;
        }
    }
    cout<<p+1;
    return 0;
}
