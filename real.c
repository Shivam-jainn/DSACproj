#include <stdio.h>
#include <string.h>

// implementation of phone book model using doubly linked list

struct node 
{
    int number;
    char firstname[50];
    char lastname[50];
    struct node* next;
    struct node* prev;
};

struct node* head = NULL;
struct node* tail = NULL;

/* 
    operations : 
        1) Adding of contact
        2) Removing of contact
        3) Searching for contact
        4) Alphabetical sort 
*/


// num1 --- num2 --- num3 --- and so on
struct node* add(struct node* head, int num)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->next = NULL;
}

