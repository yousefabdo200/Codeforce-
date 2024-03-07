#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int p=0 ,m=0 ,phy=0;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]==1){
            p++;
        }
        else if(arr[i]==2){
            m++;
        }
        else{
            phy++;
        }
    }
    int pro[p],math[m],ph[phy];
    int c1=0,c2=0,c3=0,i=0;
    while(i<n)
    {
        if(arr[i]==1)
        {
            pro[c1]=i+1;
            c1++;
        }
        else if(arr[i]==2)
        {
            math[c2]=i+1;
            c2++;
        }
        else{
            ph[c3]=i+1;
            c3++;
        }
        i++;
    }
    delete arr;
    int v1 =min(p ,m);
    int value=min(v1,phy);

    cout<< value<<endl;
    for(int i=0;i<value;i++)
    {
        cout<< pro[i]<<" "<<math[i]<<" "<<ph[i]<<endl;
    }
    return 0;
}
