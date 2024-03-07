#include <iostream>

using namespace std;

int main()
{
    int arr[5][5];
    int c1=0,c2=0,c=0;
    for(int i=0;i<5;i++)
    {
        for(int x=0;x<5;x++)
        {
            cin>>arr[i][x];
        }
    }
for(int i=0;i<5;i++)
    {
        for(int x=0;x<5;x++)
        {
            if(arr[i][x]==1)
            {
                c1=x+1;
                break;
            }
        }
        if(c1>0)
        {
            c2=i+1;
            break;
        }
    }
    if(c1!=0)
        c1=3-c1;
    if(c2!=0)
        c2=3-c2;
    if(c1<0)
    {
        c1*=-1;
    }
   if(c2<0)
    {
        c2*=-1;
    }
    cout<<c1<<endl<<c2;
    //c=c1+c2;
    //cout<<c;
    return 0;
}
