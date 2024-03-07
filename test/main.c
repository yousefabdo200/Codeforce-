#include <stdio.h>
#include <limits.h>

void solve() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0)
            break;

        int mn = INT_MAX;

        for (int i = 0; i < n; ++i) {
            int x;
            scanf("%d", &x);
            if (x < mn)
                mn = x;
        }

        printf("%d\n", mn);
    }
}

int main() {
    int tc = 1;
    // scanf("%d", &tc);
    for (int i = 1; i <= tc; ++i) {
        solve();
    }

}
