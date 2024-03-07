#include <bits/stdc++.h>
using namespace std;
int parttion(int arr[],int start,int end)
{
    int i=start;
    int j=end;
    int pav=i;
    while(true)
    {
        while(arr[pav]<=arr[j]&&pav!=j)
        {
            j--;
        }
        if(pav==j)
        {
            break;
        }
        else if(arr[pav]>arr[j])
        {
            swap(arr[j],arr[pav]);
            pav=j;
        }
        while(arr[pav]>=arr[i]&&pav!=i)
        {
            i++;
        }
        if(pav==i)
        {
            break;
        }
        else if(arr[pav]<arr[i])
        {
            swap(arr[i],arr[pav]);
            pav=i;
        }
    }
    return pav;
}
void quick_sort(int arr[],int i ,int j)
{
    if(i<j)
    {
        int pav=parttion(arr,i,j);
        quick_sort(arr,i,pav-1);
        quick_sort(arr,pav+1,j);
    }
}
int main()
{
    int m[]={50,20,60,10,30,40};
    int n=sizeof(m)/4;
    quick_sort(m,0,n-1);
    for(int x=0 ;x<n;x++)
        {
            cout<<m[x]<<" ";
        }
    return 0;
}
