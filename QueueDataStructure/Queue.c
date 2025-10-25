#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

bool isFull(void) {
    if (rear == MAX - 1) {
        return true;
    }
    return false;
}

bool isEmpty(void) {
    if (front == -1 || front > rear) {
        return true;
    }
    return false;
}

void enqueue(int item) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", item);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[rear++] = item;
    printf("%d enqueued.\n", item);
}

int dequeue(void) {
    if (isEmpty()) {
        printf("Queue Underflow! Nothing to dequeue.\n");
        return -1;
    }
    int item = queue[front];
    front = front + 1;
    if (front > rear) {
        front = -1;
        rear = -1;
    }
    return item;
}

int peek(void) {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front];
}

void display(void) {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue [Front -> Rear]: ");
    for (int i = front; i <= rear; i = i + 1) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    printf("====== Simple Queue Operations ======\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. isEmpty\n");
    printf("6. isFull\n");
    printf("7. Exit\n");

    while (1) {
        printf("\nEnter choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            }
            case 2: {
                value = dequeue();
                if (value != -1) {
                    printf("Dequeued: %d\n", value);
                }
                break;
            }
            case 3: {
                value = peek();
                if (value != -1) {
                    printf("Front: %d\n", value);
                }
                break;
            }
            case 4: {
                display();
                break;
            }
            case 5: {
                if (isEmpty()) {
                    printf("Queue is EMPTY.\n");
                } else {
                    printf("Queue is NOT empty.\n");
                }
                break;
            }
            case 6: {
                if (isFull()) {
                    printf("Queue is FULL.\n");
                } else {
                    printf("Queue is NOT full.\n");
                }
                break;
            }
            case 7: {
                printf("Exiting program...\n");
                return 0;
            }
            default: {
                printf("Invalid choice! Try 1-7.\n");
            }
        }
    }

    return 0;
}