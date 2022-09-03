# code by savir singh

string = input()

current = ''
long = 0
longest = 0

for character in string:
    if character == current:
        long += 1
    else:
        if long>longest:
            longest = long
        long = 1
        current = character

if long>longest:
    longest = long

print(longest)
