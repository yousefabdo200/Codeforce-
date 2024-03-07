#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    int ca=0,cb=0;
    int l,la,l1,l2,l3,e=0;

    for(int i=0;i<t;i++)
    {
        cin>>s;
        l=s.length();
        if(l==3)
        {
           cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
        }
        else{
            for(int x=0;x<l; x++)
            {
                if(s[x]=='a')
                    ca++;
                else
                    cb++;

            }
            if(ca>=cb || s[0]=='a')
            {
                l2=1;
                l1=l/2;
                l3=l-l1;
            }
            else
            {
                l1=l/4;
                l2=l/2;
                l3=l/4;
                if(l%2!=0)
                    l3++;
            }
            cout<<s.substr(0,l1)<<" ";
            e=l;
            cout<<s.substr(l1,l2)<<" ";
            cout<<s.substr(l2+1)<<endl;

        }
       la=0;


        }







    return 0;
}
