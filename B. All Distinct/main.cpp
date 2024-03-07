#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       set<int>s;
       int n;
       cin>>n;
       int num;
       for(int i=0;i<n;i++)
       {
           cin>>num;
           s.insert(num);
       }
        int c=s.size();
        if((n-c)%2)
            c--;
        cout<<c<<endl;

   }
    return 0;
}
