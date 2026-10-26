 1. Single Linked List

Question Description: Implement a basic Single Linked List data structure in C that supports inserting elements at 
the end and displaying the sequential elements from head to tail.

  Test Cases:
  Test Case 1: Insert elements `[10, 20, 30]`
  Expected Output: `10 -> 20 -> 30 -> NULL`
  Test Case 2: Insert elements `[5, 15, 25, 35]`
  Expected Output: `5 -> 15 -> 25 -> 35 -> NULL`

  Time Complexity:
  Insertion at End: O(n)
  Traversal / Display: O(n)
  Space Complexity:O(n)


  2. Double Linked List

Question Description:Implement a basic Double Linked List data structure in C that supports inserting
elements at the end and displaying the elements in both forward and backward directions.

Test Cases:
Test Case 1: 
Insert elements `[10, 20, 30]`
Expected Forward Output: `10 <-> 20 <-> 30 <-> NULL`
Expected Backward Output: `30 <-> 20 <-> 10 <-> NULL`

Time Complexity:
Insertion at End: O(n) (or O(1) if a tail pointer is maintained)
Traversal: O(n)
Space Complexity: O(n)
