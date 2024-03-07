#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a ,b;
    int count=0;
    long int num=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            {
                num=a-b;

            }
            else if(b>a){
                num=b-a;
            }
            if(num%10!=0)
            {
                num=num-num%10;
                count++;
            }
            if(a!=b)
            {
                count+=num/10;
            }
            cout<<count<<endl;
            count=0;
    }

    return 0;
}
