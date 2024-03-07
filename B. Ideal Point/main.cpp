#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int n;
    int k;
    while(test!=0)
    {

        cin>>n>>k;
        int i,l;
        int c1=0,c2=0;
        for(int x=0;x<n;x++)
        {
            cin>>i>>l;
            if(i==k)
            {
                c1++;
            }
            if(l==k)
            {
                c2++;
            }
            }
        if(c2!=0&&c1!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


        test--;
    }
    return 0;
}
