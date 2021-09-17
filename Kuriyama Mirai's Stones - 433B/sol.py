from collections import deque

n = int(input())
temp = list(map(int, input().split()))
freq1 = deque(temp)
freq1.appendleft(0)
temp.sort()
freq2 = deque(temp)
freq2.appendleft(0)

for i in range(1, n+1, 1):
    freq1[i] += freq1[i-1]
    freq2[i] += freq2[i-1]

m = int(input())
for i in range(1, m+1, 1):
    flag, l, r = map(int, input().split())
    if flag == 1:
        print(freq1[r] - freq1[l-1])
    else:
        print(freq2[r] - freq2[l - 1])
