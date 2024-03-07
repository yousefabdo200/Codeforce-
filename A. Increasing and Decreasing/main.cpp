#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> v;

        // Initialize the vector with the last element y
        v.push_back(y);

        int i = 1;
        while (i < n-1) {
            y -= i;
            i++;
            if (y <= x) {
                break;
            }
            v.push_back(y);
        }

        if (v.back() > x && v.back() - x > 1) {
            v.push_back(x);
            for (int i = n - 1; i >= 0; --i) {
                cout << v[i] << " "; // Print in reverse order
            }
        } else {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}
