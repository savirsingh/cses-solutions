// code by savir singh

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    set<ll> vals;
    for (int i=0; i<n; i++) {
        ll num;
        cin >> num;
        vals.insert(num);
    }
    cout << vals.size();
}
