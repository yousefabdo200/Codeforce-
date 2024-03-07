#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       vector<int>v1;
       vector <int>v2;
       vector<int>::iterator it;
       vector<int>::iterator it2;
       int n,a,b;
       cin>>n>>a>>b;
       v1.push_back(a);
       int r=n;
       while(v1.size()!=n/2)
       {
           it=find(v1.begin(),v1.end(),r);
           if(it==v1.end()&&r!=b)
           {
               v1.push_back(r);
           }
           r--;
       }
       v2.push_back(b);
       int l=1;
       while(v2.size()!=n/2)
       {
           it=find(v2.begin(),v2.end(),l);
           it2=find(v1.begin(),v1.end(),l);
           if(it==v2.end()&&it2==v1.end())
           {
               v2.push_back(l);
           }
           l++;
       }
       if(a!=*min_element(v1.begin(),v1.end())||b!=*max_element(v2.begin(),v2.end()))
       {
           cout<<-1;
       }
       else
       {
           for(int i=0;i<n/2;i++)
           {
               cout<<v1[i]<<" ";
           }
           for(int i=0;i<n/2;i++)
           {
               cout<<v2[i]<<" ";
           }
       }
       cout<<endl;
       t--;

   }
    return 0;
}
