#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while (t!=0)
   {
       int n,k;
       cin>>n>>k;
       int arr[n];
       string arange="YES";
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           if(arr[i]!=i+1)
           {
               arange="No";
           }
       }
       if(arange=="YES")
       {
           cout<<0<<endl;
       }
       else
       {
           int c=0;
           for(int i=0;i<n;i++)
           {
               int tmp = abs(arr[i] - (i + 1));
               if(tmp%k)
                c++;
              if (c==3)
              {
                  break;
              }
           }
            if (c > 2) cout << -1 << '\n';
            else if (c == 2) cout << 1 << '\n';
            else cout << 0 << '\n';

       }
       t--;
   }
    return 0;
}
