#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m=INT_MAX,x=INT_MIN,num1;
        for(int i=0;i<4;i++)
        {
            cin>>num1;
           x=max(x,num1);
           m=min(m,num1);
           cin>>num1;
        }
        int r=abs(x-m);
        cout<<r*r<<endl;
    }
    return 0;
}
