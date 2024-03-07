#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

   long long int n,x;
    cin>>n>>x;
    long long ans[x];
    long long int num[n];
   long long int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    long long int num1,num2;
    for(long long int i=0;i<x;i++)
    {
        ans[i]=0;
        cin>>num1>>num2;
        --num1;
        --num2;
        if(num1<num2)
        {
            for(long long int z=num1;z<num2;z++)
            {
                if(num[z]>num[z+1])
                {

                    ans[i]=ans[i]+num[z]-num[z+1];
                }
                if(z!=num2-1)
                {
                    ++z;
                    if(num[z]>num[z+1])
                    {

                        ans[i]=ans[i]+num[z]-num[z+1];
                    }
                }
            }
        }
        else if(num1>num2)
        {
            for(long int z=num1;z>num2;z--)
            {
                if(num[z]>num[z-1])
                {

                    ans[i]=ans[i]+num[z]-num[z-1];
                }
                if(z!=num2+1)
                {
                    --z;

                if(num[z]>num[z-1])
                {

                    ans[i]=ans[i]+num[z]-num[z-1];
                }
                }
            }
        }
        cout<< ans[i]<<endl;
    }
    return 0;
}
/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long int n,x;
    cin>>n>>x;
    map<int,int>m;
    int num;
    int c=0;
    map<int ,int>::iterator it=m.begin();
    map<int ,int>::iterator it1=m.begin();
    map<int ,int>::iterator it2=m.begin();
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        m.insert(it,{i,num});
        it++;
    }
    int num1,num2;
    for(int i=0;i<x;i++)
    {
        cin>>num1>>num2;
        if(num1<num2)
        {
            for(int z=num1;z<num2;z++)
            {
                it1=m.find(z);
                it2=m.find(z+1);
                if(it1->second>it2->second)
                {
                    c+=it1->second-it2->second;
                }
                else
                {
                    continue;
                }
            }
        }
        else if(num1>num2)
        {
            for(int z=num1;z>num2;z--)
            {
                it1=m.find(z);
                it2=m.find(z-1);
                if(it1->second>it2->second)
                {
                    c+=it1->second-it2->second;
                }
                else
                {
                    continue;
                }
            }

        }
        cout<<c<<endl;
        c=0;
    }
    return 0;
}
*/
