# code by savir singh

n = int(input())
array = list(map(int, input().split(" ")))
moves = 0

for i in range(1, len(array)):
    if array[i]<array[i-1]:
        moves+=array[i-1]-array[i]
        array[i]=array[i-1]

print(moves)
