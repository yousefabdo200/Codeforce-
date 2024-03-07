#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int a ,b;
        a=(x/2)+1;
        b=x-a;
        cout<<b<<endl;
    }
    return 0;
}
