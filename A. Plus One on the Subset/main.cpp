#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int z;
    int num;
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>z;
        for(int x=0;x<z;x++)
        {
            cin>>num;
            if(num>max)
                max=num;
            if(num<min)
                min=num;
        }
        cout<<max-min<<endl;
         max=INT_MIN;
         min=INT_MAX;
    }
    return 0;
}
