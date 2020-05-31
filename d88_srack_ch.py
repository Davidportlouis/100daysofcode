s1 = input()
s2 = input()
char_set1,char_set2 = set(),set()
for i in range(len(s1)):
    char_set1.add(s1[i])
for i in range(len(s2)):
    char_set2.add(s2[i])
if(char_set1 == char_set2):
    print("yes")
else:
    print("no")