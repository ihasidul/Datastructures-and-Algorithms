# Binary Search

When there is a **sorted** array and you want to find an element in it, you can use binary search. Binary search is a divide and conquer algorithm.
It works by repeatedly dividing the search interval in half. Begin with an interval covering the whole array.
If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow
it to the upper half. Repeatedly check until the value is found or the interval is empty.

- O(logn) time complexity
- There are two ways to implement binary search:
    1. recursively
    2. iteratively.


To apply Binary Search algorithm:
- The data structure must be sorted.
- Access to any element of the data structure takes constant time.
- Time complexity is O(LogN) or O(NLogN) depending on if you are scanning the  input or not.

### Pseudo Code:

```
# Low is inclusive and high is exclusive 
do{
    search(arr, low, high, target):
        mid = [low + (high - low)/2 ]
        value = arr[mid]
        if value == target:
            return true
        else if value > target:
            low = mid + 1
        else:
            high = mid 
} while (low < high)
return false

```
