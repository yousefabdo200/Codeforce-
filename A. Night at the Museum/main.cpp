#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count=0;
    string s;
    cin>>s;
    int x=1;
    for(int i=0 ;i<s.length();i++)
    {
        int c=s[i]-96;
        if(abs(c-x)>13)
        {
            count+=26-abs(c-x);
        }
        else {
            count+=abs(c-x);
        }
        x=s[i]-96;
    }
    cout<<count<<endl;
    return 0;
}
