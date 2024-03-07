#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    long long int num ,m;
    int c=0;
    while(t!=0)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(i==0)
            {
                m=(num*2)-1;
            }
            else{
               c+=(num-1)/m;
            }
        }
        cout<<c<<endl;
        c=0;
        t--;
    }
    return 0;
}
