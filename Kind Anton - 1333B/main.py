def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    if a[0] != b[0]:
        return "NO"
    positive = negative = status = False
    if a[0] == 1:
        positive = True
    elif a[0] == -1:
        negative = True
    for i in range(1, n, 1):
        if a[i] > b[i]:
            if not negative:
                status = True
        elif a[i] < b[i]:
            if not positive:
                status = True
        if a[i] == 1:
            positive = True
        elif a[i] == -1:
            negative = True
    if status:
        return "NO"
    else:
        return "YES"

t = int(input())
while t:
    t -= 1
    print(solve())