#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int c=0;
  for(int i=0;i<n;i++)
  {
      if(s[i]=='1')
      {
          c++;
      }
  }
  n-=c*2;
  if(n<0)
  {
      n*=-1;
  }
  cout<<n;

    return 0;
}
