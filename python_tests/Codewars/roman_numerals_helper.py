class RomanNumerals:
    @staticmethod
    def to_roman(val):
        mask = [0, 0, 0, 0]
        digits = str(val)
        digits = list(map(int, digits))
        digits = mask[:4 - len(digits)] + digits
        result = ''
        result += digits[0] * 'M'
        numerals = [[], ['C', 'CD', 'D', 'CM'], ['X', 'XL', 'L', 'XC'], ['I', 'IV', 'V', 'IX']]
        for i in range(1, 4):
            if digits[i] < 4:
                result += digits[i] * numerals[i][0]
            elif digits[i] == 4:
                result += numerals[i][1]
            elif digits[i] == 5:
                result += numerals[i][2]
            elif 9 > digits[i] > 5:
                result += numerals[i][2] + (digits[i] - 5) * numerals[i][0]
            else:
                result += numerals[i][3]
        return result

    @staticmethod
    def from_roman(roman_num):
        single_numerals = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        dual_numerals = {'IV': 4, 'IX': 9, 'XL': 40, 'XC': 90, 'CD': 400, 'CM': 900}
        numerals = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000,
                    'IV': 4, 'IX': 9, 'XL': 40, 'XC': 90, 'CD': 400, 'CM': 900}
        result = 0
        if len(roman_num) == 1:
            result += numerals[roman_num]
        else:
            i = 0
            while i < len(roman_num):
                if i == len(roman_num) - 1:
                    result += numerals[roman_num[i]]
                    i += 1
                elif numerals[roman_num[i]] >= numerals[roman_num[i + 1]]:
                    print(i, "one -", roman_num[i], numerals[roman_num[i]])
                    result += numerals[roman_num[i]]
                    i += 1
                else:
                    print(i, "two -", roman_num[i:i+2], numerals[roman_num[i:i+2]])
                    result += numerals[roman_num[i:i+2]]
                    i += 2
        return result


S = input()
print(RomanNumerals.to_roman(int(S)))
print(RomanNumerals.from_roman(RomanNumerals.to_roman(int(S))))
