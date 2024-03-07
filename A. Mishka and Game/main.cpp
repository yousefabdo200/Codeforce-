#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m ,c;
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        cin>>c;
        if(m>c)
            c1++;
        else if(c>m)
            c2++;
    }
    if(c1>c2)
        cout<< "Mishka";
    else if(c2>c1)
        cout<<"Chris" ;
    else
        cout<<"Friendship is magic!^^";
    return 0;
}
