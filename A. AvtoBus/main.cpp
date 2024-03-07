#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t!=0)
    {
        long long int n,x=0,y=0;
        cin>>n;
        if(n%2==1||n<4)
        {
                cout<<-1<<endl;

        }
        else
        {
             y=n/4;
            x=n/6;
            if(n%6!=0)
                ++x;
            cout<<x<<" "<<y<<endl;
        }

        t--;
    }
    return 0;
}
