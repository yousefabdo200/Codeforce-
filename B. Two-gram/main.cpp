#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    map<string, int> m;
    map<string, int>::iterator it;
    string p = "";

    for (int i = 0; i < n - 1; i++) {
        p += s[i];
        p += s[i + 1];
        it = m.find(p);
        if (it == m.end()) {
            m.insert({p, 1});
        } else {
            it->second += 1;
        }
        p = "";
    }

    int maxFrequency = 0;
    string r="";
    for (const auto& entry : m) {
        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
            r= entry.first;
        }
    }

    cout << r;

    return 0;
}
