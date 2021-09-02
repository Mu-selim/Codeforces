a, b, c = map(int, input().split())

if c == 0:
    if a == b:
        print("YES")
    else:
        print("NO")
elif ((b < a and c > 0) or (b > a and c < 0)):
    print("NO")
else:
    if ((b - a) % c == 0):
        print("YES")
    else:
        print("NO")