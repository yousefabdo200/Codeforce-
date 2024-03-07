#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<a*a*4<<endl;
        }
        else if(a>b)
        {
            if(b*2>=a)
            {
                cout<<b*b*4<<endl;
            }
            else{
                cout<<a*a<<endl;
            }
        }
        else
        {
            if(a*2>=b)
            {
                cout<<a*a*4<<endl;
            }
            else{
                cout<<b*b<<endl;
            }
        }

    }
    return 0;
}
