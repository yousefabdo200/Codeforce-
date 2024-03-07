#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        for(int i=0;i<3;i++)
        {
            int a=0,b=0,c=0;
            for(int x=0;x<3;x++)
            {
                if(arr[i][x]=='A')
                    a++;
                else if(arr[i][x]=='B')
                    b++;
                else if(arr[i][x]=='C')
                    c++;
            }
            if(a==0)
           {
               cout<<'A'<<endl;
               break;
           }
            if(b==0)
           {
               cout<<'B'<<endl;
               break;
           }
            if(c==0)
           {
               cout<<'C'<<endl;
               break;
           }

        }

    }
    return 0;
}
