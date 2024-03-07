#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num;
    int p=0;

    for(int i=0;i<n;i++)
    {
        cin>>num;
        int arr[num];
        for(int x=0;x<num;x++)
        {
            cin>>arr[x];
        }

        for(int x=1;x<num-1;x++)
        {

            if(arr[0]!=arr[num-1]&&arr[0]!=arr[1])
            {

                cout<<1<<endl;
                break;
            }
            else if(arr[num-1]!=arr[0]&&arr[num-1]!=arr[num-2])
            {

                cout<<num<<endl;
                break;
            }
            else{
                if(arr[x]!=arr[x+1]&arr[x]!=arr[x-1])
                {
                    cout<<x+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
