#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int n,num;
        cin>>n;
        long long s=0;

        for(int i=0;i<n;i++)
        {
            cin>>num;
            s+=num;
        }
       long long  int x=s%n;
        long long int y=n-x;

        cout<<x*y<<endl;
        t--;
    }
    return 0;
}
