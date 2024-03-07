#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=1;
    int x=10;
    int num;
    string s="";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        while(x)
        {
            if(num%x>0&x<num)
                {
                    s+=to_string(num%x);
                    num-=(num%x);
                    s+=" ";
                    count++;
                }else{

                     if(x>num)
                     {
                            s+=to_string(num);
                            s+=" ";
                            break;
                     }

                }
                x*=10;
        }
        cout <<count<<endl<<s<<endl;
        count=1;
        s="";
        x=10;
    }
    return 0;
}
