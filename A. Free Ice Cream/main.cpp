#include <iostream>

using namespace std;

int main()
{
    int q;
    long long int c;
    cin>>q>>c;
    int distress=0;
    for(int i=0;i<q;i++){
        char a;
        cin>>a;
        int value;
        cin>>value;
        if(a=='+')
        {
            c+=value;
        }
        else if(a=='-')
        {
            if(c>value)
            {
                c-=value;
            }
            else{
                distress++;
            }
        }

    }
    cout<<c<<" "<<distress;
    return 0;
}
