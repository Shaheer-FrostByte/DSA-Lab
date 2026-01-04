# Day 2

## What I Learned
- Two Pointer Method

## LeetCode Problems Solved
- Valid Palindrome (#125)
- Remove Duplicates from Sorted Array (#26)
- Reverse String (#344)

### Valid Palindrome
- Had to clean the string by removing non-alphanumeric characters. 
- Used a for-each loop to traverse the string. 
- Used tolower(char) to convert to lowercase letters. And isalnum(char) to check if a character was alphanumeric.
- Used 2 pointer approach to compare letters on opposite ends and moving the pointers inwards. Like in Converging Pointers/Opposite Direction.

### Remove Duplicates from Sorted Array
- Used 2 pointer approach(same direction). Left pointer stays on last known unique element while right pointer explores ahead.
- Whenever right discovers a new unique element, that element is pushed in a vector and left is set equal to right. Then right explores further again.
- At the end, unique elements are assigned/mapped back onto to the input vector because it had to be modified in place.
- There were a lot better solutions to this in the solutions tab.

### Reverse String
- for(int i = 0; i < s.size()/2; i++) {
-   swap(s[i ], s[s.size()-i-1 ]); 
- }

## Day Summery
Learned the Two Pointer Method today. Also added notes to this folder. I'll add notes to more folders if I feel the topics need it. 
I'm thinking about continuing this during the semester too, it's a good exercise, builds skills and discipline.