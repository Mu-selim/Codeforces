def solve():
    n, t = map(int, input().split())
    list1 = list(map(int, input().split()))
    l = 0
    r = 0
    temp = 0
    ans = 0
    while r < n:
        temp += list1[r]
        r += 1
        while temp > t:
            temp -= list1[l]
            l += 1
        ans = max(ans, (r-l))
    return ans

print(solve())
