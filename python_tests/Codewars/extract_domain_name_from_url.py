import re


def domain_name(url):
    match = re.search(r"^((https?)://)?(www\.)?([^.]*)", url)
    return match.group(4)


S = input()
print(domain_name(S))