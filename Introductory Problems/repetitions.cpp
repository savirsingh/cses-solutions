// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char current = ' ';
    long long long1 = 0;
    long long longest = 0;

    for (char character:str) {
        if (character==current) {
            long1+=1;
        }
        else {
            if (long1>longest) {
                longest=long1;
            }
            long1=1;
            current=character;
        }
    }

    if (long1>longest) {
        longest=long1;
    }
    cout << longest;
}
