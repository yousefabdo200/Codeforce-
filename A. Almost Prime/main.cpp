#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers.
    for(int p=2;p*p<=n;p++)
    {
        if(isPrime[p])
        {
             for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    int r=0;

   for(int i=6;i<=n;i++)
   {
       int c=0;
      for(int x=2;x<=i;x++)
      {

          if(isPrime[x])
          {

              if(i%x==0)
              {
                  c++;
              }
              if(c==2)
              {
                   cout<<i<<x-1<<x<<endl;
                  r++;
                  c=0;
                  break;
              }
          }
      }
   }
   cout<<r;
    return 0;
}
