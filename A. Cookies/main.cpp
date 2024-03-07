#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int num;
   int odd=0,even=0;
   for(int i=0;i<n;i++)
   {
       cin>>num;
       if(num%2==0)
       {
           even++;
       }
       else
       {
           odd++;
       }
   }
   if(odd%2==1)
   {
       cout<<odd;
   }
  else{

       cout<<even<<endl;
   }
    return 0;
}
