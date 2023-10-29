#include <stdio.h>
#include <stdlib.h>
#include "queue82.h"
#include "queue82.c"
int main()
{
    struct Queue* q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    deQueue(q);
    deQueue(q);
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    deQueue(q);
    printf("Queue Front : %d \n", ((q->front != NULL) ? (q->front)->key : -1));
    printf("Queue Rear : %d", ((q->rear != NULL) ? (q->rear)->key : -1));
    return 0;
}