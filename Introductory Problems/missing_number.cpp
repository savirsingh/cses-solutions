#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long s=0;
    cin >> n;
    vector<long long> correct(n+1);
    iota (begin(correct), end(correct), 1);
    vector<long long> in1;
    for (s; s<n-1; s++) {
        int num;
        cin >> num;
        in1.push_back(num);
    }
    sort(in1.begin(), in1.end());

    if (in1.size()!=1) {
        for (long long j=0; j<correct.size()-1; j++) {
            if (correct[j] != in1[j]) {
                cout << correct[j];
                break;
            }
        }
    }
    else {
        if (correct[0]==in1[0]) {
            cout << correct[1];
        }
        else {
            cout << correct[0];
        }
    }
}
