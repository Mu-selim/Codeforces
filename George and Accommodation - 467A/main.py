n = int(input())
counter = 0
while n:
    n -= 1
    p, q = map(int, input().split())
    if q-p >= 2:
        counter += 1
print(counter)