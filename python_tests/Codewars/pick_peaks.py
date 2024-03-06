def pick_peaks(arr):
    result = {"pos": [], "peaks": []}
    i = 1
    while i < len(arr) - 1:
        if arr[i - 1] < arr[i] >= arr[i + 1]:
            plato_start = i
            while arr[i] == arr[i + 1] and i < len(arr) - 2:
                i += 1
            else:
                if arr[i] > arr[i + 1]:
                    result["pos"].append(plato_start)
                    result["peaks"].append(arr[i])
                i += 1
        else:
            i += 1
    print(result)


pick_peaks([3, 2, 3, 6, 4, 1, 2, 3, 2, 1, 2, 3])
pick_peaks([1, 2, 3, 6, 4, 1, 2, 3, 2, 1])
pick_peaks([1, 2, 5, 4, 3, 2, 3, 6, 4, 1, 2, 3, 3, 4, 5, 3, 2, 1, 2, 3, 5, 5, 4, 3])
pick_peaks([2, 1, 3, 1, 2, 2, 2, 2])
pick_peaks([0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23])
pick_peaks([-4, 10, 19, -1, 13, 3, 1, 14, 20, 15])
