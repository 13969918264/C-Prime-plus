/*  
    утвс╨ю@20200510
*/
/*  queue.h -- interface for a queue    */

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

/*  INSERT ITEM TYPE HERE FOR EXAMPLE   */
//  typedef int Item;           //  for use_q.c
typedef struct item
{
    long arrive;            //  the time when a customer joins the queue
    int processtime;            //  the number of consultation minutes desired
} Item;         //  for mall.c  
/*  OR typedef struct item {int gumption; int charisma;} Item   */

#define MAXQUEUE 10

typedef struct node
{
    Item item;
    struct node * next;
} Node;

typedef struct queue
{
    Node * front;           /*  pointer to front of queue   */
    Node * rear;            /*  pointer to rear of queue    */
    int items;              /*  number of items in queue    */
} Queue;

/*  operation:          initialize the queue    */
/*  precondition:       pq points to a queue    */
/*  postcondition:      queue is initialized to being empty */
void InitializeQueue(Queue * pq);

/*  operation:          check if queue is full  */
/*  precondition:       pq points to previonsly initialized queue   */
/*  postcondition:      return True if queue if full, else return False */
bool QueueIsFull(const Queue * pq);

/*  operation:          check if queue is empty  */
/*  precondition:       pq points to previonsly initialized queue   */
/*  postcondition:      return True if queue if empty, else return False */
bool QueueIsEmpty(const Queue * pq);

/*  operation:          determine the number in queue   */
/*  precondition:       pq points to previonsly initialized queue   */
/*  postcondition:      return number of items in queue */
int QueueItemCount(const Queue * pq);

/*  operation:          add item to rear of queue   */
/*  precondition:       pq points to previonsly initialized queue. item is to be placed at the rear of queue   */
/*  postcondition:      if queue is not empty, item is placed at rear of queue and function returns True; 
                        otherwise, queue is unchanged and function returns False   */
bool EnQueue(Item item, Queue * pq);

/*  operation:          remove item from front of the queue  */
/*  precondition:       pq points to previonsly initialized queue   */
/*  postcondition:      if queue is not empty, item at head of queue is copied to *pitem and deleted from queue,
                        and function and return True;
                        if the operation empties the queue, the queueis reset to empty,
                        if the queue is emptyu to begin with ,queue is unchanged and the function return False */
bool DeQueue(Item * pitem, Queue * pq);

/*  operation:          empty the queue  */
/*  precondition:       pq points to previonsly initialized queue   */
/*  postcondition:      the queue is empty  */
void EmptyTheQueue(Queue * pq);

#endif
