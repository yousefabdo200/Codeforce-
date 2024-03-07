#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
        ios_base::sync_with_stdio(false);
            cin.tie(NULL);
       long long int n , k;
       cin>>n>>k;
       if(n%k==0||n%2==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           if((n-k)%k==0||(n-k)%2==0)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
      t--;

   }
    return 0;
}
