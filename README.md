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

5. Queue with Array
Question Description: Implement a Queue data structure using a static array in C.
Support core operations: enqueue (insert at rear), dequeue (remove from front), and check queue status.

Test Cases:
Test Case 1: Enqueue elements [10, 20, 30], then Dequeue once.
Expected Output: Dequeued element is 10, next front is 20.
Test Case 2: Enqueue until queue is full.
Expected Output: Queue Overflow message.

Time Complexity:
Enqueue: O(1)
Dequeue: O(1)
Space Complexity: O(n) (where n is maximum capacity of the array)
Time Complexity:
Push: O(1)
Pop: O(1)
Peek: O(1)
Space Complexity: O(n) (where n is the number of elements in the stack)

6. Circular Queue with Array
Question Description: Implement a Circular Queue data structure using a fixed-size array in C.
 Support core operations like enqueue, dequeue, and wrap-around handling to reuse empty spaces.

Test Cases:
Test Case 1: Enqueue [10, 20, 30], dequeue twice, then enqueue [40, 50, 60] to test wrap-around.
Expected Output: Queue successfully wraps around and utilizes the freed slots.

Time Complexity:
Enqueue: O(1)
Dequeue: O(1)
Space Complexity: O(n) (where n is the capacity of the array)

7. Queue using Linked List
Question Description: Implement a Queue data structure using a Singly Linked List in C.
 Support dynamic enqueue operations at the rear and dequeue operations from the front.

Test Cases:
Test Case 1: Enqueue elements [10, 20, 30], then dequeue twice.
Expected Output: Dequeued elements are 10 and 20, new front is 30.

Time Complexity:
Enqueue: O(1)
Dequeue: O(1)
Space Complexity: O(n) (where n is the number of elements in the queue)

8. Merge Sort
Question Description: Implement Merge Sort in C to sort an
array in ascending order using the divide and conquer strategy.

Test Cases:
Test Case 1: Input [12, 11, 13, 5, 6, 7]
Expected Output: 5 6 7 11 12 13

Time Complexity:
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n log n)
Space Complexity: O(n)
