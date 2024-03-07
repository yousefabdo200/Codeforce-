#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        cin>>s;
        int v1=0,v2=0;
        for(int i=0;i<6;i++)
        {
           if(i<3)
           {
               v1+=s[i]-48;
           }
           else
           {
               v1-=s[i]-48;
           }
        }
        if(v1==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
