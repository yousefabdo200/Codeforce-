#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int n;
   int arr[]={1,2,3,4,5,6,7,8,9};
    while(t!=0)
    {
        t--;
        set<int>l;
         cin>>n;
         int flag=-1;
        if(n<10)
        {
            cout<<n<<endl;
        }
        else
        {
            int ans=9;
            int x=9;
            l.insert(x);
             for(int i=1;i<9;i++)
            {
                for(int x=1;x<9;x++)
                {

                    if(ans+x==n)
                    {
                        l.insert(x);
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    break;
                }
                if(i==8)
                {
                    ans=0;
                    --x;
                     l.insert(x);
                    for (int num : l) {
                        ans+=num;
                    }
                    i=1;


                }

            }
            if(ans!=n)
            {
                cout<<-1<<endl;
                continue;

            }
                 for (auto rit = l.rbegin(); rit != l.rend(); ++rit) {
            cout << *rit;
        }
        cout << endl;
        }
    }

    return 0;
}
