def linear_search(arr,search_item):
    """
    Linear search algorithm
    """
    for i in range(len(arr)):
        if arr[i] == search_item:
            return i
    return -1

arr = [1,2,3,10,412,234,12,9]
search_item = 12
print(linear_search(arr,search_item))