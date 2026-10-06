n = int(input())
s = input().lower()

if len(s) < 26:
    print("NO")
else:
    f = True
    for c in 'abcdefghijklmnopqrstuvwxyz':
        if c not in s:
            f = False
            break
    if f:
        print("YES")
    else:
        print("NO")