n = int(input())
L=[]
while n>0:
    word = str(input())
    if word.islower():
        L.append(word)
        n=n-1

for i in range(len(L)):
    if len(L[i])>10:
        print(L[i][0] + str(len(L[i])-2) + L[i][-1])