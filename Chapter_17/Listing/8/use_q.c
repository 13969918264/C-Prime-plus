/*
    утвс╨ю@20200513
*/
/*  use_q.c -- driver testing th eQueue interface   */
/*  compile with queue.c    */

#include <stdio.h>
#include "queue.h"          //  defines Queue, Item

int main(void)
{
    Queue line;
    Item temp;
    char ch;

    InitializeQueue(&line);
    puts("Testing the Queue interface. Type a to add a value, ");
    puts("type d to delet a value, and type q to quit.");
    while ( (ch = getchar() ) != 'q')
    {
        if ( ch != 'a' && ch != 'd')          /*  iqnore other input  */
            continue;
        if (ch == 'a')
        {
            printf("Integer to add: ");
            scanf("%d", &temp);
            printf("%d\n", temp);
            if (!QueueIsFull(&line) )
            {
                printf("Putting %d into queue\n", temp);
                EnQueue(temp, &line);
            }
            else
                puts("Queue is full!");
        }
        else
        {
            if (QueueIsEmpty(&line) )
                puts("Nothing to delete!");
            else
            {
                DeQueue(&temp, &line);
                printf("Romoving %d from queue\n", temp);
            }
        }
        printf("%d items in queue\n", QueueItemCount(&line) );
        puts("Type a to add, d to delete, q to quit:");
    }
    EmptyTheQueue(&line);
    puts("Bye!");

    return 0;
}