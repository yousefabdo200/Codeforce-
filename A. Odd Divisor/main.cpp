#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int n,l=0;
        cin>>n;
        if(n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            l=n;
            string r="NO";
            while(l>2)
            {

                l/=2;
                if(l%2!=0)
                {
                    if(n%l==0)
                    {
                        r="YES";
                        break;
                    }
                }

                cout<<n<<endl;
            }
            cout<<r<<endl;
        }
        t--;

    }
    return 0;
}
