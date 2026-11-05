s = str(input())
target = "hello"
j = 0
for ch in s:
    if (ch == target[j]):
        j++
if (j == len(target)):
    print("YES")
else:
    print("NO")