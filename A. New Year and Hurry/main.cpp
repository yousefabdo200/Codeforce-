#include <iostream>

using namespace std;

int main()
{
    int n ,k;
    cin>>n>>k;
    k=240-k;
    int c=0;
    int i=1;
   while(i<=n)
   {
       c+=i*5;
       if(k-c<0)
       {
           break;
       }
        i++;
   }
   cout<<i-1;
    return 0;
}

