#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    bool r=true;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s[0]!='Y')
           {
            if(s[0]!='y')
                r=false;
           }
        if(s[1]!='e')
            {
                if(s[1]!='E')
                    r=false;
            }

        if(s[2]!='S')
           {
                if(s[2]!='s')
                    r=false;

           }
        if(r==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        r=true;

    }
    return 0;
}
