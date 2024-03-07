#include <iostream>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   bool result =false;
   for(int i=0;i<n;i++)
   {
       for(int x=0;x<m;x++)
       {
           char c;
           cin>>c;
           if(c=='C' || c=='M'||c=='Y')
           {
               result=true;
           }
       }
   }
   if(result==false)
   {
       cout<<"#Black&White";
   }
   else{
    cout<<"#Color";
   }
    return 0;
}
