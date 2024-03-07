#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int h , m ;
        cin >> h>>m;
        int c=60-m;
        ++h;
        c+=(24-h)*60;
        cout<<c<<endl;
        t--;

    }
    return 0;
}
