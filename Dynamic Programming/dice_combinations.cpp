// code by savir singh

#include <bits/stdc++.h>
#define ll long long
#define del erase
using namespace std;
const ll mod=1000000007;

int comb[1000001], n;

int dc (int a) {
    if (comb[a] != 0) {
        return comb[a];
    }
    for (int i = 1; i <= 6; i++) {
        if (a - i >= 0) {
            comb[a] += dc(a - i);
            comb[a] %= mod;
        }
    }
    return comb[a];
}

int main() {
    cin >> n;
    memset(comb, 0, sizeof(comb));
    comb[0] = 1;
    cout << dc(n);
}
