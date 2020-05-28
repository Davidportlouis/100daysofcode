from collections import Counter
input_string = input()
chars = [ch for ch in input_string.split()]

word_counts = Counter(chars)

flag = 0
idx = 0

for i in range(len(chars)):
    if(word_counts[chars[i]] == 2):
        flag = 1
        idx = i
        break
    else:
        flag = 0

if(flag == 1):
    print(chars[i])
else:
    print(-1)