n = int(input())
array = list(map(int, input().split()))
array.sort()
con = max_con = 1
for i in range(1, n, 1):
    if array[i] == array[i-1]:
        con += 1
        max_con = max(max_con, con)
    else:
        con = 1
if max_con <= (n+1) / 2:
    print("YES")
else:
    print("NO")
