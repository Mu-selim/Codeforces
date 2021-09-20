n, current = map(int, input().split())
ans = []
for i in range(1, n+1, 1):
    array = list(map(int, input().split()))
    array = array[1:]
    flag = False
    for j in array:
        if j < current:
            flag = True
            break
    if flag:
        ans.append(i)

print(len(ans))
for i in ans:
    print(i, "", end = "")
