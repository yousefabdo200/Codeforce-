#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int val;
    double count=0;
    for(int i=0;i<n ;i++)
    {
        cin>>val;
        count+=val;
    }
    n*=100;
    cout<< fixed<<setprecision(12)<<(count/n)*100;
    return 0;
}

