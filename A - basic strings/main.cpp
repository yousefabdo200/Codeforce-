#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    long long int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ')
        {
            int num=s[i];
            s[i]=(num-65+3)%26;
        }

    }
    cout<<s;
    return 0;
}
