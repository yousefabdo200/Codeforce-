#include <iostream>

using namespace std;

int main()
{
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int v1 ,v2 ,v3;
    if(x1>=x2 &&x1>=x3 &&x1>=x4)
    {

        v1=x1-x2;
        v2=x1-x3;
        v3=x1-x4;
        cout<<v1<<" "<<v2<<" "<<v3;

    }
    else if(x2>=x1 &&x2>=x3 &&x2>=x4)
    {
         v1=x2-x1;
         v2=x2-x4;
         v3=x2-x3;
         cout<<v1<<" "<<v2<<" "<<v3;

    }
    else if(x3>=x2 &&x3>=x1 &&x3>=x4)
    {
         v1=x3-x1;
        v2=x3-x2;
        v3=x3-x4;
        cout<<v1<<" "<<v2<<" "<<v3;
    }
    else if(x4>=x2 &&x4>=x1 &&x4>=
            x3)
    {
         v1=x4-x1;
        v2=x4-x2;
        v3=x4-x3;
        cout<<v1<<" "<<v2<<" "<<v3;
    }
    return 0;
}
