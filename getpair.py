from bisect import bisect_left, bisect_right

def getNumPairs(arr, l, r):
    arr.sort()
    pair_count = 0
    total_arr = len(arr)

    for idx in range(total_arr):
        start_idx = bisect_left(arr, l - arr[idx], idx + 1, total_arr)
        end_idx = bisect_right(arr, r - arr[idx], idx + 1, total_arr)
        pair_count += end_idx - start_idx

    return pair_count

print(getNumPairs([1,2,3,4,5,6,7,8,9], 10, 50))