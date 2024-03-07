#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int p = 0;
        long long int num, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num > p)
            {
                c++;
            }
            p = num;
        }
        cout << c - 1 << endl;
    }
    return 0;
}
