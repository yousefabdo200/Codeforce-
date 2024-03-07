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
        long long int num,c=INT_MAX,r=0;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(num<c)
                c=num;
            r+=num;
        }
        cout<<r-(n*c)<<endl;
    }
    return 0;
}
