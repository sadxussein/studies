import msvcrt

while True:
    # Считываем один символ ввода
    if msvcrt.kbhit():
        c = msvcrt.getch().decode('utf-8')
        print("Вы ввели:", c)
        if c == 'q':
            break