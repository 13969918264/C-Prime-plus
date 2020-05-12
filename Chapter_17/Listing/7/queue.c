/*
    утвс╨ю@20200512
*/
/*  queue.c -- the Queue type implementation    */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*  local function  */
static void CopyToNode(Item Item, Node * pn);
static void CopyTItem(Node * pn, Item * pi);

void InitializeQueue(Queue * pq)
{
    pq->front = NULL;
    pq->rear = NULL;
}

bool QueueIsFull(const Queue * pq)
{
    return pq->item == MAXQUEUE;
}

bool QueueIsEmpty(const Queue * pq)
{
    return pq->item == 0;
}

bool QueueItemCount(const Queue * pq)
{
    return pq->item;
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
    if (QueueIsEmpty(pq) )
        pq->first = pnew;
    else
        pq->rear->next = pnew;
    pq->rear = pnew;
    pq->item++;

    return true;
}

bool DeQueue(Item * pitem; Queue * pq)
{
    Node * pt;

    if (QueueIsempty(pq) )
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