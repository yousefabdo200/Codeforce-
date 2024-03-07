#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        cin>>s;
        long long int n=s.length();
        int a=0 ,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if(a==b)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
        t--;
    }
    return 0;
}
