#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    long long int num=t;

    if(n==1 && t==10)
    {
        cout<<-1;
    }
    else{
        cout<<t;
        if(t==10)
        {
            n--;
        }
        else if(t==100)
        {
            n-=2;
        }

        for(int i=1 ;i<n;i++)
        {
           cout<<0;
        }}
    return 0;
}
