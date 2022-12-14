#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    long number;
    char firstname[50];
    char lastname[50];
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *current = NULL;

struct node* getnode(){
    return (struct node*) malloc(sizeof(struct node));
}

void addnode(){
    struct node* newnode = getnode();

    if(head==NULL){
    current = newnode;
        head = newnode;
        //ask info for head node

    printf("enter the name :");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    scanf("%s",head->firstname);
    
    printf("enter last name :");
    scanf("%s",head->lastname);

    printf("enter number :");
    scanf("%ld",&head->number); 
   
    }else{

    current->next = newnode;


    printf("enter the name :");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    scanf("%s",newnode->firstname);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    
    printf("enter last name :");
    scanf("%s",newnode->lastname);

    printf("enter number :");
    scanf("%ld",&newnode->number); 
     if(head->number<1000000000)
    printf("enter the valid number ");


    newnode->prev = current;
    current = current->next ;

    }
}


// works like a charm
void deletenode(){

    if(head == NULL)
{
    printf("The book is as empty as your dms");
    return ;
}

    struct node* temp = current;

if(current->prev!=NULL){

    current = current->prev;
    temp->prev = NULL;

    current->next = NULL;

       printf("--------------------------------\n");
        printf("first name : %s\n",temp->firstname);
        printf("last name : %s\n",temp->lastname);
        printf("number : %ld\n",temp->number);
        printf("--------------------------------\n");

    free(temp);
}else{
    // free(head);
    head = NULL;
    current = NULL;
}

}

void display(){
    struct node* printnode = head;


    while(printnode!=NULL){
        
        printf("--------------------------------\n");
        printf("first name : %s\n",printnode->firstname);
        printf("last name : %s\n",printnode->lastname);
        printf("number : %ld\n",printnode->number);
        printf("--------------------------------\n");

        printnode = printnode->next;
    }

}


void searchnode(){
    struct node* search = head;

    long key;
    printf("enter the number :");
    scanf("%ld",&key);

    while (search!=NULL){
        if(search->number==key){
         printf("--------------------------------\n");
        printf("first name : %s\n",search->firstname);
        printf("last name : %s\n",search->lastname);
        printf("number : %ld\n",search->number);
        printf("--------------------------------\n");            return ;       
        }
        search = search->next;
    }

}


    void sortList() 
    {  
    struct node *current = NULL, *index = NULL;  
    int temp;  
    //Check whether list is empty  
    if(head == NULL) {  
        return;  
    }  
    else {  
        //Current will point to head  
        for(current = head; current->next != NULL; current = current->next) {  
            //Index will point to node next to current 
             for(index = current->next; index != NULL; index = index->next) {  
                //If current's data is greater than index's data, swap the data of current and index  
                if(current->number > index->number) {  
                    temp = current->number;  
                   current->number = index->number;  
                   index->number = temp;  
                }  
            }  
        } 
        display(); 
    }  
}  
    // int comp(char [],char[]);
    // int i;
    // char temp[20],s1[20],s2[20];
    //  struct node* ptr;
    // for(ptr=head;ptr!=NULL;ptr=ptr->next)
    // {
    //     for(ptr=ptr->next;ptr!=NULL;ptr=ptr->next)
    //     {
    //         strcpy(s1,ptr->firstname);
    //         strcpy(s2,ptr->firstname);
    //         i=comp(s1,s2);
    //         if(i==1)
    //         {
    //             strcpy(temp,ptr->firstname);
    //             strcpy(ptr->firstname,ptr->firstname);
    //             strcpy(ptr->firstname,temp);
    //         }
    //     }
    // }


int comp(char s1[],char s2[]) {
    return s1==s2;
}


int main(){
        // M E N U
while(1){
    printf("\n MAIN MENU\n 1.Add node \n 2.Delete node \n 3.Display contact list \n4.Search node \n5.Sort\n6.exit");
    int choice;
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
    addnode();  
    break;
    
    case 2:
    deletenode();
    break;

    case 3:
    display();
    break;
    
    case 4:
    searchnode();
    break;
    
    case 5:
    sortList();
    break;
    case 6:
    exit(0);
    default:printf("enter the right choice\n");
   
    
    }

    }

}