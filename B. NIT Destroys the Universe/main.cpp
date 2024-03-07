#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n,c=0;
        cin>>n;
        bool r=true;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
            {
                if(arr[i]!=0)
                {
                    while(arr[i]!=0)
                    {
                        i++;
                    }
                    c++;
                }

            }

        if(c<=2)
        {
        cout<<c<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
        c=0;
        r=true;
        t--;
    }
    return 0;
}
