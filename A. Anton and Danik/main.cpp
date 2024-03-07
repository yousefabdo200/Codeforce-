#include <iostream>
#include <string>;
using namespace std;
int main()
{
    int num;
    cin>>num;
    string s;
    cin>>s;
    int Anton=0, Dani=0;
    for (int i=0;i<num;i++)
    {
        if(s[i]=='A')
        {
            Anton++;
        }
        else
        {
             Dani++;
        }
    }
    if( Dani>Anton)
    {
        cout<<"Danik";
    }
    else if(Dani<Anton)
    {
        cout<<"Anton";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}
