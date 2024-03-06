import re


def alphabet_position(text):
    # we could use filter():
    text = list(filter(lambda x: x.isalpha(), text))
    # or, alternatively, we could use regex (don't forget to import re):
    # text = ''.join(re.findall(r"[a-zA-Z]", text))
    return ' '.join(list(map(lambda x: str(ord(x.lower()) - 96), text)))


S = input()
print(alphabet_position(S))
