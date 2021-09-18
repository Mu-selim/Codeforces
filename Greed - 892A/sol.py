n = int(input())
temp = list(map(int, input().split()))
sum_volume = sum(temp)
temp = list(map(int, input().split()))
temp.sort()
s = temp[-1] + temp[-2]
if s < sum_volume:
    print("NO")
else:
    print("YES")
