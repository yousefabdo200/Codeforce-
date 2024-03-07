#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int max , min,f;
    cin>>f;
    max=min=f;
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>f;
        if(f<min)
        {
            count++;
            min=f;
        }else if(f>max)
        {
            max=f;
            count++;
        }
    }
    cout<<count;
    return 0;
}
