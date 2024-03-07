#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char c1='a';
        char c2='a';
        char c3='a';
        n-=3;
        while(c3!='z')
        {
            if(n<=0)
            {
                break;
            }
            c3++;
            n--;
        }
        while(c2!='z')
        {
            if(n<=0)
            {
                break;
            }
            c2++;
            n--;
        }
        while(c1!='z')
        {
            if(n<=0)
            {
                break;
            }
            c1++;
            n--;
        }
       cout<<c1<<c2<<c3<<endl;
    }

    return 0;
}
