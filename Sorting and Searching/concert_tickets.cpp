// code by savir singh

#include <bits/stdc++.h>
#define ll long long
#define del erase
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    multiset<ll, greater<int>> prices;

    for (int i=0; i<n; i++) {
        ll a;
        cin >> a;
        prices.insert(a);
    }

    for (int j=0; j<m; j++){
        ll x;
        cin >> x;
        auto it = prices.lower_bound(x);
        if (it == prices.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            prices.del(it);
        }
    }
}
