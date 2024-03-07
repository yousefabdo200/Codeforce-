#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        if(n>=100)
        {
            count+=n/100;
            n=n%100;
        }
        else if(n>=20)
        {
            count+=n/20;
            n=n%20;
        }
        else if(n>=10)
        {
            count+=n/10;
            n=n%10;
        }
        else if(n>=5)
        {
            count+=n/5;
            n=n%5;
        }
        else{
            count+=n;
            break;
        }
    }
    cout<<count;
    return 0;
}
