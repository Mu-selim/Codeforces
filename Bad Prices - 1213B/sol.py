t = int(input())
while t:
    t -= 1
    n = int(input())
    l = list(map(int, input().split()))
    ans = 0
    right_min = 4000000000
    while n:
        n -= 1
        if l[n] > right_min:
            ans += 1
        right_min = min(right_min, l[n])
    print(ans)
