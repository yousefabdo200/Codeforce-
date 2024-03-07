#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int m[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n-1;x++)
        {
            if(m[x]>m[x+1])
            {
                swap(m[x],m[x+1]);
            }
        }
    }
    for(int i=0; i<n;i++)
    {
        cout<<m[i]<<" ";
    }
}
int main()
{
    int m[]={9,5,7,2,1,0,4,3,6,8};
    int n=sizeof(m)/4;
    bubble_sort(m,n);

}
