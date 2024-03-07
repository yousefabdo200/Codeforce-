#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*

    vector<int> a(n, 0);
    vector<int> b(n, 0);

    for (int i = 1; i < n; ++i) {
        string s = to_string(i);
        int ans = 0;
        for (char j : s) {
            ans += (j - '0');
        }
        a[i] = ans;
        b[i] = b[i - 1] + ans;
    }

    int t;
    cin >> t;
    for (int ti = 0; ti < t; ++ti) {
        int n;
        cin >> n;
        cout << b[n] << endl;
    }*/
    int t;
     int n = 200001;

     vector<int> b(n+1, 0);
    for(int i=1;i<=n;i++)
    {
        string s = to_string(i);
         long long int sum=0;
         for (char j : s) {
            sum+= (j - '0');
    }
     b[i] = b[i - 1] + sum;
    }
    cin>>t;
    while(t--)
    {

        cin>>n;
        cout<<b[n]<<endl;
    }

    return 0;
}
