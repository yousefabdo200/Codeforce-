#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
   if(n>=0)
   {
       cout<<n;
   }
   else
   {

        long long int n1=n/10;
        long long int n2=((n/100)*10)+n%10;
        cout<<max(n1,n2);
   }
    return 0;
}
