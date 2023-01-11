In computer science, a stack is a linear data structure that follows a last-in-first-out (LIFO) principle. This means that the last element added to the stack will be the first one to be removed. Stacks are often used to store temporary data or to reverse the order of items.

A queue is a linear data structure that follows a first-in-first-out (FIFO) principle. This means that the first element added to the queue will be the first one to be removed. Queues are often used to store data that needs to be processed in a specific order, such as tasks in a task queue or events in an event queue.

Both stacks and queues have some common operations that can be performed on them. These operations include adding an element (called "pushing" for stacks and "enqueuing" for queues), removing an element (called "popping" for stacks and "dequeuing" for queues), and checking the element at the top of the stack or front of the queue (called "peeking").

Here is an example of how to implement a stack in C:

Copy code
#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

void push(int value) {
  if (top == STACK_SIZE - 1) {
    printf("Error: stack overflow\n");
    return;
  }
  top++;
  stack[top] = value;
}

int pop() {
  if (top == -1) {
    printf("Error: stack underflow\n");
    return -1;
  }
  int value = stack[top];
  top--;
  return value;
}

int peek() {
  if (top == -1) {
    printf("Error: stack is empty\n");
    return -1;
  }
  return stack[top];
}
And here is an example of how to implement a queue in C:

Copy code
#define QUEUE_SIZE 100

int queue[QUEUE_SIZE];
int front = 0;
int rear = -1;
int count = 0;

void enqueue(int value) {
  if (count == QUEUE_SIZE) {
    printf("Error: queue overflow\n");
    return;
  }
  rear = (rear + 1) % QUEUE_SIZE;
  queue[rear] = value;
  count++;
}

int dequeue() {
  if (count == 0) {
    printf("Error: queue underflow\n");
    return -1;
  }
  int value = queue[front];
  front = (front + 1) % QUEUE_SIZE;
  count--;
  return value;
}

int peek() {
  if (count == 0) {
    printf("Error: queue is empty\n");
    return -1;
  }
  return queue[front];
}