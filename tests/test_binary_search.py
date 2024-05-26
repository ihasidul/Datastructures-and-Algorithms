from searching.binary_search import binary_search

def test_binary_search_found():
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    assert binary_search(arr, 5, 0, len(arr) - 1) == 4

def test_binary_search_not_found():
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    assert binary_search(arr, 11, 0, len(arr) - 1) == -1

def test_binary_search_empty_array():
    arr = []
    assert binary_search(arr, 5, 0, len(arr) - 1) == -1

