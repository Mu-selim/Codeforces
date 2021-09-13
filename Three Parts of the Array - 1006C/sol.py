n = int(input())
array = list(map(int, input().split()))
l = 0
r = n-1
sum_l = 0
sum_r = 0
res = 0
while l < r+1:
    if sum_l <= sum_r:
        sum_l += array[l]
        l += 1
    else:
        sum_r += array[r]
        r -= 1
    if sum_l == sum_r:
        res = sum_l
print(res)
