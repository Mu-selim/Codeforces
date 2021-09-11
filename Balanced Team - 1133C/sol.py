n = int(input())
l = list(map(int, input().split()))
l.sort()
ptr1 = 0
ptr2 = 0
ans = 0
temp = 0
while ptr2 < n:
    if abs(l[ptr2] - l[ptr1] <= 5):
        temp = abs(ptr2 - ptr1) + 1
        ptr2 += 1
    else:
        ptr1 += 1
    ans = max(ans, temp)
print(ans)
