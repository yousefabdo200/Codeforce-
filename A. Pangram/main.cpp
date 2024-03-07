#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   string result="NO";
   if(n<26)
   {
       cout<<result;
   }
   else{
        for(int i =0;i<n+1;i++)
    {
        int v=s[i];
        if(v<97)
        {
            v+=32;
            s[i]=v;
        }}
        sort(s.begin(),s.end());
    for(int i =0;i<n+1;i++)
    {

        if(s[i+1]-s[i]==1)
        {
            result="Yes";
        }
        else if(s[i+1]-s[i]==0)
        {
            continue;
        }
        else if(s[i+1]-s[i]>1 ||  s[0]!='a'||s[n-1]!='z'){
            result="No";
            break;
        }
        if(i==n-1)
        {
            break;
        }
    }
    cout<<result;


   }

    return 0;
}
