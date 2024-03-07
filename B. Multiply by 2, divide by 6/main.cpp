#include <iostream>

using namespace std;
void multi(int n)
{
    if(n==1)
    {
        cout<<0<<endl;

    }
    else if(n%3!=0)
    {
        cout<<-1<<endl;

    }
    else
    {
        int c=0;
        while(n!=1)
        {
            if(n%3!=0)
            {
                cout<<-1<<endl;
                break;
            }
            if(n%6==0)
            {
                n/=6;
            }else
            {
                n*=2;
            }
            c++;
            if(n==6)
            {
                ++c;
                n=1;
                break;
            }
        }
        if(n==1)
        {
            cout<<c<<endl;
        }
    }
    return;

}

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        multi(n);
        if(n)
        t--;
    }
    return 0;
}
