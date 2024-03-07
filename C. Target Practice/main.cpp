#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        char arr[10][10];
        for(int i=0;i<10;i++)
        {
            for(int x=0;x<10;x++)
            {
                cin>>arr[i][x];
            }
        }
        int val=0;
        for(int i=0;i<10;i++)
        {
            for(int x=0;x<10;x++)
            {
                if(arr[i][x]=='X')
                {
                    if(i==0||i==9||x==0||x==9) val+=1;
                    else if(i==1||i==8||x==1||x==8) val+=2;
                    else if(i==2||i==7||x==2||x==7) val+=3;
                    else if(i==3||i==6||x==3||x==6) val+=4;
                    else if(i==4||i==5||x==4||x==5) val+=5;
                }
            }
        }
        cout<<val<<endl;

        t--;
    }
    return 0;
}
