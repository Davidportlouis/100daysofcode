s = input().split()
k = int(input())
n = k
for i in range(len(s)):
    if(i == n-1):
        stri = ''.join(reversed(s[i]))
        print(stri,end=" ")
        n+=k
    else:
        print(s[i],end=" ")
