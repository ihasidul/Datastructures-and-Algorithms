# Array

A contiguous block of memory that stores a collection of elements of the same type. The elements can be accessed randomly using an index.

Insertion in array means rewriting the memory space not inserting into memory.In insertion you go to the byte and add the width of the byte you want to add.Example a 32 bit integer is 4 bytes so you go to the byte and add 4 bytes.Then multiply by the offset of the index you want to add to.
Example:
For array **a = int[5]**
the equation will be **a + width \* offset**

Reading an array is and O(1) operation because you can access the array by index.

Some concepts to keep in mind about arrays:

- Arrays are fixed size, contiguous memory blocks
- That means they can't grow
- THere is no "insertAt" or push or pop. Doesn't mean you can't write those though.
