country = []
count = {}

def get_country(inp):
    inp = inp.split()
    return inp[-1]


n = int(input())
uip = []
for i in range(n):
    uip.append(input())
for string in uip:
    country.append(get_country(string))
for word in country:
    if word in count:
        count[word] += 1
    else:
        count[word] = 1
sorted_ctry = sorted(count,key=count.get,reverse=True)
for ctry in sorted_ctry:
    print(ctry,count[ctry])