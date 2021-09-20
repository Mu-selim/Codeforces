def solve():
    n = int(input())
    a = list(map(int, input().split()))
    ptr = n-1
    while ptr > 0 and a[ptr] <= a[ptr-1]:
        ptr -= 1
    while ptr > 0 and a[ptr] >= a[ptr-1]:
        ptr -= 1
    return ptr

t = int(input())
while t:
    t -= 1
    print(solve())
