#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int l=1;
    int p=0;
    while(n!=0)
    {
        p=(l*l)+l;
        n-=p;
        l++;

    }
    cout<<l<<endl;
    return 0;
}
