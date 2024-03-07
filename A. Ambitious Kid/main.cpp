#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long int n;
   cin>>n;
   long long int small=INT_MAX;

   for(int i=0;i<n;i++)
   {
       long long int num;
       cin>>num;
       if (num==0)
       {
           small=num;
           break;
       }
      small=min(abs(num),small);
   }
   cout<<small;
    return 0;
}
