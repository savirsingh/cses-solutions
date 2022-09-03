// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, moves=0;
    cin >> n;
    long long arr[n];
    for (int s=0; s<n; s++) {
        cin >> arr[s];
    }
    for (int i=1; i<n; i++) {
        if (arr[i]<arr[i-1]) {
            moves+=(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }
    cout << moves;
}
