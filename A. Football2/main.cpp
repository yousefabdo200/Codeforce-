#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;
    long long int num =s.length();
    int zeros=0;
    int ons=0;
    string r="NO";
    for(int i=0;i<num;i++)
    {
        if(s[i]=='0')
        {
            ++zeros;
           if(zeros==7)
           {
                r="YES";
                break;
           }
           if(ons!=0)
           {
               ons=0;
           }

        }
        if(s[i]=='1')
        {
            ++ons;
           if(ons==7)
           {
                r="YES";
                break;
           }
           if(zeros!=0)
           {
               zeros=0;
           }

        }
    }
    cout<<r<<endl;
    return 0;
}
