class VigenereCipher(object):
    def __init__(self, key, alphabet):
        self.key = key
        self.alphabet = alphabet

    def encode(self, text):
        result = []
        real_key = ''.join(self.key[i % len(self.key)] for i in range(len(text)))
        for i in range(len(text)):
            if text[i] in self.alphabet:
                result.append(self.alphabet[(self.alphabet.index(text[i]) +
                                             self.alphabet.index(real_key[i])) %
                                            len(self.alphabet)])
            else:
                result.append(text[i])
        return ''.join(result)

    def decode(self, text):
        result = []
        real_key = ''.join(self.key[i % len(self.key)] for i in range(len(text)))
        for i in range(len(text)):
            if text[i] in self.alphabet:
                result.append(self.alphabet[(self.alphabet.index(text[i]) -
                                             self.alphabet.index(real_key[i])) %
                                            len(self.alphabet)])
            else:
                result.append(text[i])
        return ''.join(result)


c = VigenereCipher("password", "abcdefghijklmnopqrstuvwxyz")
print(c.key, c.alphabet)
print(c.encode('codewars'), 'rovwsoiv')
print(c.decode('rovwsoiv'), 'codewars')
print(c.encode('waffles'), 'laxxhsj')
print(c.decode('laxxhsj'), 'waffles')
print(c.encode('CODEWARS'), 'CODEWARS')
print(c.decode('CODEWARS'), 'CODEWARS')