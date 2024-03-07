#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       long long int n;
       cin>>n;
       if(n <= 1399 )
       {
           cout <<"Division 4"<<endl;
       }
       else if(1400 <=n && n <= 1599)
       {
           cout<<"Division 3"<<endl;
       }
        else if( 1600 <=n && n <= 1899)
        {
            cout<<"Division 2"<<endl;
        }
    else
    {

        cout<<"Division 1"<<endl;
    }
        t--;
   }
    return 0;
}
