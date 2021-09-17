n = int(input())
array = list(map(int, input().split()))
s = d = 0
for i in range(n):
    if i % 2 == 0:
        if array[0] > array[-1]:
            s += array[0]
            array.pop(0)
        else:
            s += array[-1]
            array.pop(-1)
    else:
        if array[0] > array[-1]:
            d += array[0]
            array.pop(0)
        else:
            d += array[-1]
            array.pop(-1)
print(s, d)
