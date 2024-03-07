#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    int mag=0 , count=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(mag==0)
        {
            mag=x;
            count++;
        }
        else if(x>mag || x<mag)
        {
            mag=x;
            count++;
        }
    }
    cout<<count;
    return 0;
}
