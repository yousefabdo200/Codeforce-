#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int m=97;
    int x=122;
    string pass="";
    int i=1;
    int c1=0;
    int c2=0;
    while(c1<n)
    {
        c1++;
        if(pass.length()<k)
            {char c;
            if(i%2==0 and i!=0)
            {
                c=m;
                pass+=c;
                m++;
                i++;
            }
            else if(i%2!=0 and i!=0){
                c=x;
                pass+=c;
                x--;
                i++;
            }}
        else
        {
           pass+=pass[c2];
           c2++;
        }


    }
    cout<<pass;
    return 0;
}
