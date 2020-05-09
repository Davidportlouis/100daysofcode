# regex pattern matching to find individual url
import re

url_list = []
n = int(input())
for i in range(n):
    url = input()
    url_list.append(url)
n_url = set()
for url in url_list:
    x = re.findall(r'[^https://www.](?:[a-zA-Z]|[0-9]|[$-_@&+])+',url)
    n_url.add(x[0])

print(len(n_url))
