#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        long long int n , one=0 , d=0,w=0;
        cin>>n;
        int num ;
        string r="YES";
        for(int i=0;i<n;i++){
            cin>>num;
            if(num==1)
            {
                one++;
                w++;
            }
            else{
                w+=2;
            }
        }
        if(w%2==0)
            {
                d=w/2;
                if(d%2==0)
                {
                    cout<<"YES"<<endl;
                } else{
                if(one){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }}
            }
            else
            {
                cout<<"NO"<<endl;

            }
    }
    return 0;
}
