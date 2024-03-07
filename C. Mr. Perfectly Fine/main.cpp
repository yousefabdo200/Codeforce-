#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long long int n;
        cin>>n;
        int num;
        string s;
        int c=0;
        vector<pair<int ,string>>v;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            cin>>s;
            if(s=="00")
                continue;
            v.push_back({num,s});
            c=0;
        }
        sort(v.begin(),v.end());
        int one=0,two=0,third=0;
        for(int i=0; i<v.size(); i++)
       {
           if(v[i].second=="01"&&one==0)
                one+=v[i].first;
           if(v[i].second=="10"&&two==0)
                two+=v[i].first;
           if(v[i].second=="11")
           {
               third+=v[i].first;
               break;
           }

       }
       //cout <<one<<two<<third<<endl;
       if(third==0)
       {
           if(one==0||two==0)
           {
               cout<<-1<<endl;
           }
           else
           {
               cout<<one+two<<endl;
           }
       }
       else
       {
           if(one==0||two==0)
           {
               cout<<third<<endl;
           }
           else
           {
               cout<<min(one+two,third)<<endl;
           }

       }
        t--;

    }
    return 0;
}
