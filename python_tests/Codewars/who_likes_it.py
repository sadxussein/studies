names = ["Alex", "Jacob", "Max"]

if len(names) == 0:
    print("no one likes this")
elif len(names) == 1:
    print(names[0], "likes this")
elif len(names) == 2:
    print(names[0], "and", names[1], "like this")
elif len(names) == 3:
    print(names[0], ", ", names[1], " and ", names[2], " like this", sep='')
else:
    print(names[0], ", ", names[1], " and ", len(names) - 2, " others like this", sep='')
