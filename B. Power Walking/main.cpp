#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        map<int,int>m;
        map<int,int>::iterator it=m.begin();
        int num;
        int dif=0;
        for(int i=0;i<n;i++ )
        {
            cin>>num;
            it=m.find(num);
            if(it==m.end())
            {
                m.insert(it,{num,0});
            }
            else{
                dif++;
            }
        }
       dif=n-dif;
        for(int i=0;i<n;i++)
        {
            if(i<dif)
            {
                cout<<dif<<" ";
            }
            else
            {
             ++dif;
             cout<<dif<<" ";
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}
