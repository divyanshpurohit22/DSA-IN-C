# Queue Data Structure
Definition: A linear data structure that follows FIFO (First In, First Out) principle.
Analogy: Like a line of people waiting at a ticket counter — first to arrive is served first.

# Characteristics
1. FIFO Order: Element inserted first is removed first.

2. Two Ends:
    Front (Rear of line): Where elements are removed (dequeued).
    Rear (Back of line): Where elements are added (enqueued).

3. Operations:
    enqueue(x) → Add element at rear
    dequeue() → Remove element from front
    front() / peek() → View front element without removing
    isEmpty() → Check if queue is empty
    isFull() → Check if queue is full (in fixed-size)

4. Restricted Access: Only front and rear are accessible.

# Types
1. Simple Queue:- Basic FIFO
2. Circular Queue:- Rear connects to front → avoids wastage of space
3. Priority Queue:- Elements removed based on priority
4. Deque(Double ended Queue):- Insert/delete from both ends