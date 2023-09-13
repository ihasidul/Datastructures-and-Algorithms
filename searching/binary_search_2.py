def binary_search(arr: list, target: int):
    """
    Binary search algorithm. Return index of target if it is in arr, else -1.
    """
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] < target:
            low = mid + 1
        elif arr[mid] > target:
            high = mid - 1
        else:
            return mid
    return -1


arr = [1, 2, 3, 10, 12, 23, 34, 45, 56, 67, 78, 89, 90, 100]
target =2
print(binary_search(arr, target))
