n = int(input())
array = list(map(int, input().split()))
array.sort()

if array[n-1] >= array[n-2] + array[n-3]:
    print("NO")
else:
    print("YES")
    for i in range(n - 1, -1, -2):
        print(array[i], end=" ")
    for i in range(n % 2, n, 2):
        print(array[i], end=" ")