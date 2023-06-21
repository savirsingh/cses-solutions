// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

// dp[i] = answer for i dollars
const int MM = 1e6 + 1;
int n, x, dp[MM];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 1; i <= MM; ++i) dp[i] = INF;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        int val; cin >> val;
        for (int j = val; j <= x; ++j) {
            dp[j] = min(dp[j], dp[j - val] + 1);
        }
    }
    cout << (dp[x] == INF ? -1 : dp[x]) << endl;
}
