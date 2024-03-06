import math


class Complex(object):
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary

    def __add__(self, no):
        re = "{:.2f}".format(self.real + no.real)
        im = "{:.2f}".format(self.imaginary + no.imaginary)
        if float(im) >= 0:
            return re + '+' + im + 'i'
        else:
            return re + im + 'i'

    def __sub__(self, no):
        re = "{:.2f}".format(self.real - no.real)
        im = "{:.2f}".format(self.imaginary - no.imaginary)
        if float(im) >= 0:
            return re + '+' + im + 'i'
        else:
            return re + im + 'i'

    def __mul__(self, no):
        re = "{:.2f}".format(self.real * no.real - self.imaginary * no.imaginary)
        im = "{:.2f}".format(self.real * no.imaginary + self.imaginary * no.real)
        if float(im) >= 0:
            return re + '+' + im + 'i'
        else:
            return re + im + 'i'

    def __truediv__(self, no):
        re = "{:.2f}".format((self.real * no.real + self.imaginary * no.imaginary) / (no.real ** 2 + no.imaginary ** 2))
        im = "{:.2f}".format((self.imaginary * no.real - self.real * no.imaginary) / (no.real ** 2 + no.imaginary ** 2))
        if float(im) >= 0:
            return re + '+' + im + 'i'
        else:
            return re + im + 'i'

    def mod(self):
        res = "{:.2f}".format((self.real ** 2 + self.imaginary ** 2) ** 0.5)
        return str(res) + '+0.00i'

    def __str__(self):
        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result


if __name__ == '__main__':
    c = map(float, input().split())
    d = map(float, input().split())
    x = Complex(*c)
    y = Complex(*d)
    print(*map(str, [x + y, x - y, x * y, x / y, x.mod(), y.mod()]), sep='\n')