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


3. Stacks with Array

Question Description: Implement a Stack data structure using a static array in C.
Support core operations: push (insert), pop (remove), peek (view top), and check overflow/underflow conditions.

Test Cases:
Test Case 1: Push elements [10, 20, 30], then Pop once.
Expected Output: Top element is 30, after pop top element is 20.
Test Case 2: Push until stack is full.
Expected Output: Stack Overflow message when exceeding capacity.

Time Complexity:
Push: O(1)
Pop: O(1)
Peek: O(1)
Space Complexity: O(n) (where n is maximum capacity of the array)


4. Stacks with Linked List
Question Description: Implement a Stack data structure using a Singly Linked List in C.
Support core operations: push, pop, and peek dynamically without size restrictions.

Test Cases:
Test Case 1: Push elements [10, 20, 30], then view the top.
Expected Output: Top element is 30.
Test Case 2: Pop an element from the stack.
Expected Output: Popped element 30, new top is 20.

Time Complexity:
Push: O(1)
Pop: O(1)
Peek: O(1)
Space Complexity: O(n) (where n is the number of elements in the stack)
