// code by savir singh

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    ll y, x;
    cin >> t;
    for (int s=0; s<t; s++)
    {
        cin >> y >> x;
        if (y < x)
        {
            if (x % 2 != 0)
            {
                ll num = x * x;
                cout << num - y + 1 << "\n";
            }
            else
            {
                ll num = (x - 1) * (x - 1) + 1;
                cout << num + y - 1 << "\n";
            }
        }
        else
        {
            if (y % 2 == 0)
            {
                ll num = y * y;
                cout << num - x + 1 << "\n";
            }
            else
            {
                ll num = (y - 1) * (y - 1) + 1;
                cout << num + x - 1 << "\n";
            }
        }
    }
}
