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

9. Quick Sort
Question Description: Implement Quick Sort in C using the partitioning method
to sort an array in ascending order.
Test Cases:
Test Case 1: Input [10, 7, 8, 9, 1, 5]
Expected Output: 1 5 7 8 9 10

Time Complexity:
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n^2) (when the smallest or largest element is always chosen as pivot)
Space Complexity: O(log n) (due to recursive stack calls)

10. Radix Sort
Question Description: Implement Radix Sort in C to sort an array of non-negative
 integers by processing individual digit places using Counting Sort.

Test Cases:
Test Case 1: Input [170, 45, 75, 90, 802, 24, 2, 66]
Expected Output: 2 24 45 66 75 90 170 802

Time Complexity:
Best/Average/Worst Case: O(d * (n + b)) where d is the number of digits and b is the base (10 for decimal).
Space Complexity: O(n + b)

 Heap Sort
Question Description: Implement Heap Sort to sort an array in ascending order using a max heap. 
The algorithm builds a max heap, repeatedly swaps the root with the last element, and restores the heap property until the array is sorted.

Test Cases:
Test Case 1: Input [1, 9, 8, 6, 5, 4, 3, 2, 0]
Expected Output: 0 1 2 3 4 5 6 8 9   
Test Case 2: Input [4, 1, 3, 2]
Expected Output: 1 2 3 4   
Test Case 3: Input [5, 5, 2, 1, 2]
Expected Output: 1 2 2 5 5  

Time Complexity:
Build Heap: O(n)  
Heap Sort: O(n log n)  

12. Bucket Sort
Question Description: Implement Bucket Sort in C to sort an array of floating-point numbers by
 distributing elements into buckets, sorting individual buckets, and gathering them back.

Test Cases:
Test Case 1: Input [0.89, 0.56, 0.65, 0.12, 0.34, 0.23, 0.45]
Expected Output: 0.12 0.23 0.34 0.45 0.56 0.65 0.89

Time Complexity:
Best / Average Case: O(n + k) (where n is the number of elements and k is the number of buckets)
Worst Case: O(n^2) (when all elements fall into the same bucket)
Space Complexity: O(n + k)

13. k smallest element (partitioning)
Question Description: Implement QuickSelect in C using partitioning to find the k-th smallest
element in an unsorted array without fully sorting it.

Test Cases:
Test Case 1: Input [7, 10, 4, 3, 20, 15], k = 3
Expected Output: 3rd smallest element is 7

Time Complexity:
Average Case: O(n)
Worst Case: O(n^2) (when bad pivots are chosen)
Space Complexity: O(1) (iterative implementation) or O(log n) (recursive stack)

14. Bin Sort
Question Description: Implement Bin Sort (Counting Sort style) in C to sort an array of
non-negative integers within a specified range by distributing them into indexed bins.

Test Cases:
Test Case 1: Input [4, 2, 2, 8, 3, 3, 1]
Expected Output: 1 2 2 3 3 4 8

Time Complexity:
Best / Average / Worst Case: O(n + k) (where n is the number of elements and k is the range of input values)
Space Complexity: O(n + k)

15. Tower of Hanoi
Question Description: Implement a recursive solution in C to solve the
Tower of Hanoi puzzle for n disks, printing the sequence of moves required.

Test Cases:
Test Case 1: 3 disks from rod 'A' to rod 'C' using rod 'B'
Expected Output: 7 sequential disk movements ending with all disks on rod 'C'.

Time Complexity:
Time Complexity: O(2^n)
Space Complexity: O(n) (due to recursive call stack)

16. Binary Trees
Question Description: Implement a Binary Tree data structure in C along with
 recursive traversal methods (Pre-order, In-order, and Post-order).

Test Cases:
Test Case 1: Create a tree with root 1, left child 2, and right child 3.
Expected Pre-order Output: 1 2 3
Expected In-order Output: 2 1 3
Expected Post-order Output: 2 3 1

Time Complexity:
Traversal: O(n) (where n is the number of nodes)
Space Complexity: O(h) (where h is the height of the tree due to the call stack)

17. Binary Search Tree
Question Description: Implement a Binary Search Tree data structure in C supporting node insertion
 and in-order traversal (which produces elements in sorted order).

Test Cases:
Test Case 1: Insert values [50, 30, 20, 40, 70, 60, 80]
Expected In-order Output: 20 30 40 50 60 70 80

Time Complexity:
Search / Insertion: O(h) where h is height (O(log n) for balanced, O(n) for skewed tree)
Space Complexity: O(n)

18. AVL Trees
Question Description: Implement a self-balancing AVL Tree in C with insertion logic
 and automatic rotation handling to maintain balance, verified via in-order traversal.

Test Cases:
Test Case 1: Insert values [10, 20, 30, 40, 50, 25]
Expected In-order Output: 10 20 25 30 40 50

Time Complexity:
Search / Insertion / Deletion: O(log n)
Space Complexity: O(n)

19. Parenthesis Matching
Question Description: Implement Parenthesis Matching in C using a
 Stack to verify if expression brackets ((), {}, []) are balanced and properly nested.

Test Cases:
Test Case 1: Input "{[()()]}"
Expected Output: Balanced (Valid Expression)
Test Case 2: Input "([)]"
Expected Output: Not Balanced (Invalid Expression)

Time Complexity:
Time Complexity: O(n) (where n is the length of the string)
Space Complexity: O(n)
