n, s = int(input()), input()

if (("??" in s or "C?C" in s or "M?M" in s or "Y?Y" in s or s[0] == "?" or s[-1] == "?")
    and not("CC" in s or "YY" in s or "MM" in s)):
    print("YES")
else:
    print("NO")