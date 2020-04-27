/*
    утвс╨ю@20200427
*/
/*  list.h -- header file for a simple list type    */
#ifndef LIST_H
#define LIST_H

#include <stdbool.h>           /*  C99 feature */

/*  program-specific declarations   */

#define TSIZE   45          /*  size of array to hold title */
struct film
{
    char title[TSIZE];
    int rating;
};

/*  general type defintions */

typedef struct film Item;

typedef struct node
{
    Item item;
    struct node * next;
} Node;

typedef Node * List;

/*  function prototypes */

/*  operation:          initialize a list                               */
/*  proconditions:      plist points to a list                          */
/*  postconditions:     the list is initialized to emety                */
void InitializeList(List * plist);

/*  operation:          determine if list is empty                      */
/*                      plist points to an initialized list             */
/*  postconditions:     function returns Ture if list is empty          */
/*                      and returns False otherwise                     */
bool ListIsEmpty(const List * plist);

/*  operation:          determine if list is full                       */
/*                      plist points to an initialized list             */
/*  postconditions:     function returns Ture if list is full           */
/*                      and returns False otherwise                     */
bool ListIsFull(const List * plist);

/*  operation:          determine number of items in List               */
/*                      plist points to an initialized list             */
/*  postconditions:     function returns number of items to end         */
unsigned int ListItemCount(const List * plist);

/*  operation:          add item to end of List                         */
/*  proconditions:      items is an item to be added to list            */
/*                      plist points to an initilized list              */
/*  postconditions:     if possible, function adds item to end          */
/*                      of list and return s True; otherwise the        */
/*                      function returns False                          */
bool AddItem(Item item, List * plist);

/*  operation:          app a function to each item in list             */
/*                      plist points to an initialized list             */
/*                      pfun points to a function that takes an         */
/*                      Item argument and has no return value           */
/*  postconditions:     the function pointed to by pfun is              */
/*                      executed once for each item inthe list          */
void Traverse(const List *plist, void (* pfun)(Item item));

/*  operation:          free allocated memory, if any                   */
/*                      plist points to an initialized list             */
/*  postconditions:     an memory allocated for the list is freed       */
/*                      and the list is set to empty                    */
void EmptyTheList(List * plist);

#endif