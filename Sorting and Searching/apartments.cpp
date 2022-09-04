// code by savir singh

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> pref(n);
    vector<int> app(m);
    for (int i = 0; i < n; i++)
        cin >> pref[i];
    for (int i = 0; i < m; i++)
        cin >> app[i];
    sort(pref.begin(), pref.end());
    sort(app.begin(), app.end());
    int answer = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (abs(pref[i] - app[j]) <= k){
            answer++;
            i++;
            j++;
        }
        else if (pref[i] < app[j]){
            i++;
        }
        else {
            j++;
        }
    }
    cout << answer;
}
