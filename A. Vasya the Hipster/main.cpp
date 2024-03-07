#include <iostream>

using namespace std;

int main()
{
    int r , b;
    cin>>r>>b;
    if(r>b)
    {
        cout<< b<<" "<<(r-b)/2;
    }
    else{
        cout<<r<<" "<<(b-r)/2;
    }
    return 0;
}
