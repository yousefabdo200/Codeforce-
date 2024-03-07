#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector < int> arr(27);
        //int arr[27];
        int c=0;
        for(int i = 0 ; i < n ; i++) {
            arr[s[i]-'A']++;
            if(arr[s[i]-'A'] == (s[i]-'A'+1)) {
                c++;
            }
        }
        cout<< c<<endl;
    }
    return 0;
}
