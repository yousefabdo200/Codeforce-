#include <iostream>

using namespace std;

int main()
{
    int n ,m;
    cin>>n>>m;
    int c=(n-1)/(m-1);
    /*
    int x=0;

     while(n!=0)
     {
         c++;
         ++x;
         if(x%m==0)
         {
             n++;
             x=0;
         }
         n--;

     }*/
    cout <<c+n<< endl;
    return 0;
}
