def linear_search(arr,search_item):
    """
    Linear search algorithm. Return True if search_item is in arr, else False.
    """
    for i in range(len(arr)):
        if arr[i] == search_item:
            return True
    return False

arr = [1,2,3,10,412,234,12,9]
search_item = 10
print(linear_search(arr,search_item))