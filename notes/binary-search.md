# Binary Search

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