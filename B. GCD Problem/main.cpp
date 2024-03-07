/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i, j, m;

    cin>>t;

    for(;t--;)
    {
        cin>>n;

        if((n%2)==0){
            cout<<n-3<<" 2 1\n";
        }else{
            m=n-1;

            if((m/2)%2==0)
            cout<<(m/2-1)<<" "<<(m/2+1)<<" 1\n";
            else{
                cout<<(m/2-2)<<" "<<(m/2+2)<<" 1\n";
            }
        }
    }
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int a ,b,c;
        if(n%2==0)
        {
            a=n-3;
            b=2;
            c=1;
        }
        else
        {
           c=1;
           --n;
           if((n/2)%2==0)
           {
               a=(n/2)+1;
               b=a-2;
           }
           else
           {
               a=(n/2)+2;
               b=a-4;
           }

        }
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
        t--;
    }
}
