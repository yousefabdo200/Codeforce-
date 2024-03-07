#include <iostream>
using namespace std;
int main()
{
    int p,c;
    cin>>p>>c;
    int pices=1,counter=p;
    while(counter!=0)
    {
        if(p%10==0 | (p-c)%10==0)
        {
            cout<< pices;
            counter==0;
            break;
        }
        else{
            p+=counter;
        }
        pices++;
    }
    return 0;
}
