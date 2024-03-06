def max_sequence(arr):
    # find initial sum of array
    max_sum = sum(arr)
    # save some runtime by assigning array length to a variable
    arr_len = len(arr)
    if arr_len == 0 or all(el < 0 for el in arr):
        return 0
    else:
        index = 0
        # go through elements of array
        while index < arr_len - 1:
            # skip all negative integers, they can't be a start for a good sequence
            if arr[index] >= 0:
                curr_sum = arr[index]
                # if sum of two subsequent elements is < 0 then sum of all subsequent elements can't be > max
                if arr[index] + arr[index + 1] < 0:
                    # we can skip two elements, because first element is guaranteed positive, so next one is negative
                    # and negative can't be a start for a good sequence
                    index += 2
                else:
                    next_sum = arr[index]
                    offset = 1
                    # check subsequence for good sum, if it is < 0 => break; also check for an array range integrity
                    while next_sum >= 0 and index + offset < arr_len:
                        next_sum += arr[index + offset]
                        offset += 1
                        if next_sum > curr_sum:
                            curr_sum = next_sum
                    index += offset
                # check if element (curr_sum = arr[index]) is larger than max sum of elements
                if curr_sum > max_sum:
                    max_sum = curr_sum
            else:
                index += 1
        # worst case scenario - after all checks last element is the largest sum
        if arr[arr_len - 1] > max_sum:
            return arr[index]
        return max_sum


L = list(map(int, input().split()))
print(max_sequence(L))
