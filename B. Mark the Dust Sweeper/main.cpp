#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int n,c=0;
    long long int num;
    long long int con=0;
    while(t!=0)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(i!=n-1)
            {
                if(con==0&&num==0)
                {
                    continue;
                }
                else if(con!=0&&num==0)
                {
                    c++;
                }
                else if(num!=0)
                {
                    ++con;
                    c+=num;
                }
            }
        }
        cout<<c<<endl;
        c=0;
        con=0;
        t--;
    }
    return 0;
}
