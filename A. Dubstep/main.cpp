#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
       if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&i<s.length()-2)
       {
           i+=2;
           if(c==1)
           {
               cout<<" ";
           }
       }
       else{
            c=1;
        cout <<s[i];
       }

    }
    return 0;
}
