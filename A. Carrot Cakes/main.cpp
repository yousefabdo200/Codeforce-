#include <iostream>
using namespace std;
int main()
{
    int n ,t,k,d;
    cin>>n>>t>>k>>d;
    int sub=n;
    int time=0;
    string result;
    if(n<=k)
       {
            result="NO";
       }
      else{
        while(sub>=0){
           sub-=k;
           time+=t;
           if((time>d && sub>0) )
           {
               result="YES";
               break;
           }
           else{
                result="NO";
           }
    }
      }

    cout<<result;
    return 0;
}
