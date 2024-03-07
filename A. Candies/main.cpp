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
        long long c=1;
        for(int i=1;i<30;i++)
        {
            c=2*c+1;
            if(n%c)
            {
               continue;
            }
             cout<<n/c<<endl;
                break;
        }
        t--;
    }
    return 0;
}
