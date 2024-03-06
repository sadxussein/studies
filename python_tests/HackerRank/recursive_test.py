n = int(input("Число "))
iterations_amount = int(input("Количество итераций "))

def arithmetic_progression(number, counter):
    if counter > 0:
        print(counter, number)
        return arithmetic_progression(number + 10, counter-1)
    else:
        print("finished", counter, number)
        return number
        
print(arithmetic_progression(n, iterations_amount))