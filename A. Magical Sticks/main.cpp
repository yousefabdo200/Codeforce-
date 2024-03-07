#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int n;
        cin>>n;
        long long int c=0;
        int r=1;
       c=((n-1)*(n-1+1))/2;
        r+=c/n;
        cout<<r<<endl;
        t--;
    }
    return 0;
}
