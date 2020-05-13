/*
    赵子豪@20200512
*/
/*  queue.c -- the Queue type implementation    */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*  local function  */
static void CopyToNode(Item Item, Node * pn);
static void CopyToItem(Node * pn, Item * pi);

void InitializeQueue(Queue * pq)
{
    pq->front = NULL;
    pq->rear = NULL;
}

bool QueueIsFull(const Queue * pq)
{
    return pq->items == MAXQUEUE;
}

bool QueueIsEmpty(const Queue * pq)
{
    return pq->items == 0;
}

int QueueItemCount(const Queue * pq)
{
    return pq->items;
}

bool EnQueue(Item item, Queue * pq)
{
    Node * pnew;

    if (QueueIsFull(pq) )
        return false;
    pnew = (Node *) malloc(sizeof(Node) );
    if (pnew == NULL)
    {
        fprintf(stderr, "Unable to allocate memory!\n");
        exit(1);
    }
    CopyToNode(item, pnew);
    pnew->next = NULL;
    if (QueueIsEmpty(pq) )          //empty函数有问题    
        pq->front = pnew;
    else
        pq->rear->next = pnew;
    pq->rear = pnew;    
    pq->items++;

    return true;
}

bool DeQueue(Item * pitem, Queue * pq)
{
    Node * pt;

    if (QueueIsEmpty(pq) )
        return false;
    CopyToItem(pq->front, pitem);
    pt = pq->front;
    pq->front = pq->front->next;
    free(pt);
    pq->items--;
    if (pq->items == 0)
        pq->rear = NULL;
    
    return true;
}

/*  empty the queue */
void EmptyTheQueue(Queue * pq)
{
    Item dummy;
    while (QueueIsEmpty(pq) )
        DeQueue(&dummy, pq);
}

/*  local functions */
static void CopyToNode(Item item, Node * pn)
{
    pn->item = item;
}

static void CopyToItem(Node * pn, Item * pi)
{
    *pi = pn->item;
}