# Basic Sorting Algorithms
- They're mainly used to understand how sorting works internally.
- They sort the array in place.
- They're not efficient for large datasets.
- Time complexity is generally O(n^2).

## 1. Bubble Sort
- Traverses the whole array multiple times, comparing adjacent elements.
- Repeatedly swaps adjacent elements if they are in the wrong order, i.e. in ascending or decending order.
- After each pass, the largest element moves to the end.
- Sorting progresses from end to start.
- Early Exit Optimization checks if a swap has been made in this iteration. If no, then the array must be sorted, because otherwise a swap must be made. Hence breaks the loop early, stopping unnecessary iterations.

## 2. Selection Sort
- Divides the array into 2 parts, Sorted and Unsorted part.
- Traverses the array multiple times.
- Finds the minimum element in the unsorted part.
- Swaps it with the first element of the unsorted part.
- Sorting progresses from start to end

## 3. Insertion Sort
- Traverses the array multiple times.
- Builds a sorted portion of the array from left to right.
- Takes one element at a time.
- Shifts larger elements to the right.
- Inserts the element into its correct position.

# Key Takeaways
- Understanding these makes advanced sorting algorithms like Merge Sort, Quick Sort, etc much easier.
- Insertion Sort is the best out of the 3.