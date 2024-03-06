import calendar

options = {
    0: 'MONDAY',
    1: 'TUESDAY',
    2: 'WEDNESDAY',
    3: 'THURSDAY',
    4: 'FRIDAY',
    5: 'SATURDAY',
    6: 'SUNDAY',
}

month, day, year = map(int, input().split())
print(options.get(calendar.weekday(year, month, day)))