// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n==1) {
        cout << 1;
    }
    else if (n<4) {
        cout << "NO SOLUTION";
    }
    else {
        vector<int> even;
        vector<int> odd;
        for (int i=n; i>0; i--) {
            if (i%2==0) {
                even.push_back(i);
            }
            else {
                odd.push_back(i);
            }
        }
        for (int num:odd) {
            cout << num << " ";
        }
        for (int num:even) {
            cout << num << " ";
        }
    }
}
