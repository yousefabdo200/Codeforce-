#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int x,y,n;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>n;

        while(n%x!=y)
        {
           if(n%x<y)
           {
               n-=(n%x)+1;
               n-=(n%x)-y;
                break;
           }
           else{
            n-=(n%x)-y;
            break;
           }
        }
        cout<<n<<endl;
    }
    return 0;
}
