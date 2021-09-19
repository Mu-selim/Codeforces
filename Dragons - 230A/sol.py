s, n = map(int, input().split())
array = []
for i in range(n):
    x, y = map(int, input().split())
    array.append([x, y])

array.sort(key = lambda x: x[0])
flag = False
for i in range(n):
    if s > array[i][0]:
        s += array[i][1]
    else:
        flag = True
if flag:
    print("NO")
else:
    print("YES")
