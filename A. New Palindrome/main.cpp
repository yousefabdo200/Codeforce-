#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        cin>>s;
        int n=s.length();
        char h[n/2];
        for(int i=0;i<n/2;i++)
        {
            h[i]=s[i];
        }
       sort(h,h+(n/2));
       if(h[0]!=h[(n/2)-1])
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
