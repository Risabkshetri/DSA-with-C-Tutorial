#include <stdbool.h>
#include <stdio.h>
#define MAX_SIZE 100

typedef struct
{
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;


void initializeQueue(Queue *q)
{
    q->front = -1;
    q->rear = 0;
}
bool isEmpty(Queue *q) { return (q->front == q->rear - 1); }
bool isFull(Queue *q) { return (q->rear == MAX_SIZE); }

void enqueue(Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
        return;
    }
    q->items[q->rear] = value;
    q->rear++;
    printf("Enqueued %d\n", value);
}

void dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    q->front++;
    printf("Dequeued %d\n", q->items[q->front]);
}

int peek(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    return q->items[q->front + 1];
}

void printQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Current Queue: ");
    for (int i = q->front + 1; i < q->rear; i++)
    {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main()
{
    Queue q;
    initializeQueue(&q);

    int choice, value;

    do
    {
        printf("\nQueue Operations Menu:\n");
        printf("----------------------------\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Print Queue\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(&q, value);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            value = peek(&q);
            if (value != -1)
            {
                printf("Front element: %d\n", value);
            }
            break;
        case 4:
            printQueue(&q);
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
