#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   n=1000;
   int arr[1000];
   int x=0;
   //cin>>n;
   for(int i=1;n!=0;)
   {
       if(i%3==0||i%10==3)
       {
           i++;
           continue;

       }else{
            arr[x]=i;
            n--;
            x++;
       }
       i++;
   }
   int c;
   cin>>c;
   int num;
   for(int i=0 ;i<c;i++)
   {
       cin>>num;
       cout<<arr[num-1]<<endl;
   }
    return 0;
}
