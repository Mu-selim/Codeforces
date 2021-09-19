n = int(input())
array_a = list(map(int, input().split()))
total = sum(array_a)
array_a.sort()
array_a.reverse()

m = int(input())
array_m = list(map(int, input().split()))

i = 0
while i < m:
    temp = array_m[i]
    print(total - array_a[temp-1])
    i += 1