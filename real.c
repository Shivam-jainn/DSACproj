// PHONEBOOK DIRECTORY

// Doubly Linked List implementation

#include <stdio.h>
#include <string.h>



struct node 
{
    int number;
    char firstname[50];
    char lastname[50];
    struct node* next;
    struct node* prev;
};

// 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9

struct node* head = NULL;
struct node* tail = NULL;

/* 
    operations : 
        1) Adding of contact :: add() //saanvi
        2) Removing of contact :: remove()  //shivamjain 
        3) Searching for contact :: search() //ankush
        4) Alphabetical sort :: alphasort() //ravi


        askinfo() ; //shivamjain
*/


// num1 --- num2 --- num3 --- and so on
struct node* add(struct node* head, int num)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->next = head;
    temp->number = num;  
    temp->prev = NULL;

     printf("Enter your name : ");
  
    // scanf("%s", firstname);
    
    char lastname[50];
}



