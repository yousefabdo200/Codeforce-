#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int o=0 , e=0 , num , c=0;
        for(int i=0 ;i<n;i++)
        {
            cin>>num;
            c+=num;
            if(num%2==0)
                e++;
        }
        o=n-e;
        string r="YES";
        if(c%2!=0)
        {
            cout<<"YES"<<endl;;
        }
        else if(e==n)
        {

            cout<<"NO"<<endl;
        }
        else if(o==n)
        {

            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
