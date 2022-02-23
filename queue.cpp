#include<iostream>

using namespace std;

class Queue{
public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};

// Function to create queue of given capacity
Queue* createQueue(unsigned capacity)
{
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    queue->rear = capacity - 1;
    queue->array = new int[queue->capacity];
    return queue;
}

// Function to check whether queue is full
int isFull(Queue* queue)
{
    return (queue->size == queue->capacity);
}

// Function to check whether queue is empty
int isEmpty(Queue* queue)
{
    return (queue->size == 0);
}

// Function to insert item in queue
void enQueue(Queue* queue, int item)
{
    if(isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}

// Function to remove an item from queue
int dequeue(Queue* queue)
{
    if(isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

// Function to get front of queue
int front(Queue* queue)
{
    if(isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}

// Function to get rear of queue.
int rear(Queue* queue)
{
    if(isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}

// --------Time Complexity-------
// Enqueue(insertion) -- O(1)
// Dequeue(deletion) -- O(1)
// Front(Get front) -- O(1)
// Rear(Get Rear) -- O(1)

// Auxiliary Space -- O(N)
// N is the size of array for storing elements.

int main()
{
    Queue* queue = createQueue(1000);

    enQueue(queue, 50);
    enQueue(queue, 51);
    enQueue(queue, 52);
    enQueue(queue, 53);
    enQueue(queue, 54);
    enQueue(queue, 55);
    enQueue(queue, 56);

    cout<<"Front item: "<<front(queue)<<endl;
    cout<<"Rear item: "<<rear(queue);
}