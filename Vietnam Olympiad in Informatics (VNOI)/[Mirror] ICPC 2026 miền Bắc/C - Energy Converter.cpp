#include <bits/stdc++.h>
using namespace std;

static constexpr int LIMIT = 200'000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), visited(LIMIT + 1, 0), cost(LIMIT + 1, 0), reached(LIMIT + 1, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int step = 1; step <= n; step++) {
        int discharge = 0;
        int down = a[step - 1];

        while (down >= 0) {
            int overcharge = 0;
            int up = down;
            while (up <= LIMIT) {
                if (visited[up] == step) break;
                visited[up] = step;
                cost[up] += overcharge + discharge;
                reached[up]++;
                up = up * 2 + 1;
                overcharge++;
            }

            if (down == 0) break;
            down /= 2;
            discharge++;
        }
    }

    int minimum_cost = -1;
    for (int i = 0; i <= LIMIT; i++) {
        if (reached[i] == n) {
            if (minimum_cost == -1 || cost[i] < minimum_cost) {
                minimum_cost = cost[i];
            }
        }
    }

    cout << minimum_cost << '\n';
    return 0;
}
