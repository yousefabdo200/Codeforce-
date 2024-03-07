#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t!=0)
{
    int n;
    cin>>n;
    long long int num;
    long long int a=INT_MAX;
    long long int b=INT_MAX;
    long long sum_a=0,sum_b=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        sum_a+=num;
        if(num<a)
        {
            a=num;
        }

    }
     for(int i=0;i<n;i++)
    {
        cin>>num;
        sum_b+=num;
        if(num<b)
        {
            b=num;
        }
    }
    long long int ra=(a*n)+sum_b;
    long long int rb=(b*n)+sum_a;

    cout<<min(ra,rb)<<endl;
    t--;
}
    return 0;
}
