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
        int n=s.length(),num=1;
        string r="YES";
        for(int i=1;i<n;i++)
        {
           if(s[i]==s[i-1])
            num++;
           else
           {
               if(num==1)
               {
                   r="NO";
                   break;
               }
               else{
                num=1;
               }
           }
        }
        if(num==1)
        {
            r="NO";
        }
        cout<<r<<endl;
        t--;
    }
    return 0;
}
