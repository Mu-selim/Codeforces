def solve():
    n, d = input().split()
    n = int(n)
    d = int(d)
    array = list(map(int, input().split()))
    l = ans = 0
    i = 2
    while i < n:
        while array[i] - array[l] > d:
            l += 1
        ans += (i-l)*(i-l-1) / 2
        i += 1
    return int(ans)

print(solve())
