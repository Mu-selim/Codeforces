def solve():
    a, b, c, d = map(int, input().split())
    array = [a, b, c, d]
    array.sort()
    if (a == array[2] and b == array[3]) or (a == array[3] and b == array[2]):
        return "NO"
    elif (c == array[2] and d == array[3]) or (c == array[3] and d == array[2]):
        return "NO"
    return "YES"

t = int(input())
while t:
    t -= 1
    print(solve())