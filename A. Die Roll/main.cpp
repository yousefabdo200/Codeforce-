#include <iostream>

using namespace std;

int main()
{
    int a ,b ,die=7;
    cin>>a>>b;
    if(a>=b)
    {
        die-=a;
    }
    else
        die-=b;

    /*if(die==1)
    {
        cout<<"0/1";
    }*/
     if(die==6)
    {
        cout<<"1/1";
    }
    else{
        if(die%2==0)
        {
            cout<<int(die/2)<<"/"<<3;
        }
        else{
            if(6%die==0 && die>1)
            {
                cout<<1<<"/"<<2;
            }
            else{
                cout<<die<<"/"<<6;
            }
        }
    }
    return 0;
}
