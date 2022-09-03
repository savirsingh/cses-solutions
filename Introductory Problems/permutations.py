# code by savir singh

import sys
n = int(sys.stdin.readline())

if n == 1:
    print(1)
    sys.exit()
if n <= 3:
    print("NO SOLUTION")
    sys.exit()
else:
    even = []
    odd = []
    for i in range(n, 0, -1):
        if i % 2 == 0:
            even.append(i)
        else:
            odd.append(i)

    print(str(odd + even).replace('[', '').replace(']', '').replace(',', ''))
