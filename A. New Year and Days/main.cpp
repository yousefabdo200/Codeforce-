#include <iostream>

using namespace std;

int main()
{
    int n;
    string in , date;
    cin>>n>>in>>date;
    if(date=="month")
    {
        if(n<=29)
        {
            cout<<12;
        }
        else if(n==30)
        {
            cout<<11;
        }
        else
        {
            cout<<7;
        }
    }else
    {
        if(n == 6 || n == 5){
            cout<<53<<endl;
        }
        else{
          cout<<52<<endl;
        }
    }
    return 0;
}
