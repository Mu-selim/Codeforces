s = input()
ans = ""
for i in s:
    temp = int(i)
    if temp >= 5:
        ans += str(9-temp)
    else:
        ans += str(temp)
if ans[0] == '0':
    ans = s[0] + ans[1:]
print(ans)
