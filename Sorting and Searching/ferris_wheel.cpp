// code by savir singh

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, l, answer;
    cin >> n >> x;
    int p[n];
    for(int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p+n); // 2, 3, 7, 9

    l = 0;
    for(int r = n-1; r >= l; r--){
        if(p[l] + p[r] <= x)
            l++;
        answer++;
    }
    cout << answer;
}
