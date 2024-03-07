#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        string s  ;
        cin>>s;
        t--;
          int a = -1, b = -1, c = -1, d = -1;
         if (n < 4)
        {
            cout << "NO" << endl;
            continue;
        }
       for(int i=0;i<n;i++)
       {

           if(s[i]=='M'||s[i]=='O'||s[i]=='W'||s[i]=='E')
           {
              s[i]+=32;
           }
       }
       int i=0;
       if(s[i]=='m')
       {
           while(s[i]=='m')
           {
               i++;
           }
           a=1;
       }
       else
       {
           cout<<"NO"<<endl;
           continue;
       }
       if(s[i]=='e')
       {
           while(s[i]=='e')
           {
               i++;
           }
           b=1;
       }
       else
       {
           cout<<"NO"<<endl;
           continue;
       }if(s[i]=='o')
       {
           while(s[i]=='o')
           {
               i++;
           }
           c=1;
       }
       else
       {
           cout<<"NO"<<endl;
           continue;
       }
       if(s[i]=='w')
       {
           while(s[i]=='w')
           {
               i++;
           }
           d=1;
       }
       else
       {
           cout<<"NO"<<endl;
           continue;
       }

         if (a == 1 and b == 1 and c == 1 and d == 1 and i == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
