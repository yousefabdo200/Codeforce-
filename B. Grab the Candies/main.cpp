#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int y=0 ,no=0;
        int num;

        for(int i=0;i<n;i++)
        {
             cin>>num;
            if(num%2==0)
                y+=num;
            else
                no+=num;
        }
        if(y>no)
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
