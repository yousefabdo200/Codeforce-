#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int n1,n2;
    if(n%2==0)
    {
        n1=n2=n/2;
        if(n1%2!=0)
        {
            n1++;
            n2--;
        }
    }else{
        n--;
        n1=n2=n/2;
        n1++;
        n++;
        if(n1%2==0)
            swap(n1,n2);
        while(n1%3!=0)
        {
            n1+=2;
            n2-=2;
        }
    }
    cout<<n1<<" "<<n2;
    return 0;
}
