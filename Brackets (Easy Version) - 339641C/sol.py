s = input()
if s == "":
    print("YES")
else:
    sum = 0
    open_left = 0
    open_right = 0
    for i in s:
        if i == '(':
            sum += 1
            open_right += 1
        elif i == ')' and sum > 0:
            sum -= 1
        if i == ')':
            open_left += 1
    if sum == 0 and open_left == open_right:
        print("YES")
    else:
        print("NO")