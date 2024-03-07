#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p1;
    cin>>p1;
    int l[n];
    int i=0;
    for( ;i<p1;i++)
    {
        cin>>l[i];
    }
    int p2;
    cin>>p2;
    bool r=false;
    for( int y=0 ;y<p2;y++)
    {
        int l2;
        cin>>l2;
        for(int x=0;x<p1;x++)
        {
            if(l[x]==l2)
            {
                r=true;
                break;
            }
        }
        if(r==false)
        {
            l[i]=l2;
            i++;
        }
        r=false;
    }
    sort(l,l+n);
    for(int i=0;i<n;i++)
    {
        if(l[i]!=i+1)
        {
            r=true;
            break;
        }

    }
    if(r==false)
    {
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!" ;
    }
    return 0;
}
