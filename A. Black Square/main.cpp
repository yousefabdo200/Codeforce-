#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num=4;
   int arr[num];
    for(int i=0 ;i<num;i++)
    {
        cin>>arr[i];
    }
    int cal=0;
    string s;
    cin>>s;
    for (int i;i<s.length();i++)
    {
        int c=0;
        c=s[i]-48;
        cal+=arr[c-1];

    }
    cout<<cal;
    return 0;
}
