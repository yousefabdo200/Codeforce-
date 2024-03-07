#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        t--;
        long long int n,k;
        cin>>n>>k;
        long long r=n;

        int s;
        for(int i=2; i<=r; i++){
            if(n%i==0){
                s=i;
                break;
            }
        }
        k--;
        r+=s;
        r+=(2*k);
        cout<<r<<endl;
    }
    return 0;
}
