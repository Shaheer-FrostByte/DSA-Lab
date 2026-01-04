# Two Pointer Method

# 1. What is the Two Pointer Method?
- A technique using two pointers/indices to traverse data structures
- Optimizes problems from O(n²) to O(n) or O(n log n)
- Reduces time complexity by avoiding nested loops
- Works on sorted arrays or sequences where relative ordering matters


# 2. Types of Two Pointer Method
## A. Opposite Direction (Converging Pointers)
- Starts from both ends, moves toward center
- Used for: sorted array problems, pair finding, palindrome checks

## B. Same Direction (Sliding Window/Chasing Pointers)
- Both start at beginning, move in same direction
- Fast pointer explores, slow pointer maintains condition
- Used for: subarray problems, duplicate removal, window-based problems

## C. Variation: Fast and Slow Pointers (Floyd's Algorithm)
- Different speeds (one moves twice as fast)
- Used for: cycle detection, finding middle element


# 3. Words that indicate use of Two Pointer Method
- "Sorted array"
- "Pair sum" / "Triplet sum"
- "Subarray" / "Substring"
- "Contiguous" / "Consecutive"
- "Remove duplicates in-place"
- "Palindrome"
- "Window" / "Sliding"
- "Minimum/Maximum length"
- "Two indices"
- "In O(n) time, O(1) space"


# 4. What is Two Pointer Method mostly used for?
- Optimization: Reducing time complexity
- Search Problems: Finding pairs/triplets with specific conditions
- Array Manipulation: In-place operations without extra space
- String Processing: Palindrome checks, substring problems
- Window Problems: Fixed or dynamic size window operations
- Cycle Detection: In linked lists
- Pointer Synchronization: When two sequences need coordinated traversal


# Key Takeaways:
- Sort first if not sorted (enables opposite direction)
- Opposite direction for pair finding in sorted arrays
- Same direction for sliding window/subarray problems
- Always validate pointer bounds to prevent errors
- Consider edge cases: empty array, single element, all duplicates
- Practice pattern recognition to identify which type to use

