#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin ,x);
    string s="";
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='{' || x[i]==',' || x[i]==' ' || x[i]=='}')
            {
                continue;
            }
        else{
            if(s.length()==0)
            {
                s+=x[i];
            }
            else{
                for(int n=0;n<s.length();n++)
                {
                    if(x[i]!=s[n])
                    {
                        if(n==s.length()-1)
                        {
                            s+=x[i];
                            break;
                        }
                        continue;
                    }
                    else{
                        break;
                    }
                }
            }
        }
    }
    cout<<s.length();
    return 0;
}
