// *** LinkList implementation ***
// Insertion of the nodes from beginning and at the end.
// Displaying the nodes with data and links to next node.

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
// Prototypes of the function declared below and their data types.
void insert_beg();
void insert_end();
void display();
// Node type structure
struct node
{
    int data; // data 
    struct node *link; // link to next node.
    
};
// Setting Start pointer to null
struct node *start=NULL;

// Main function
int main() {
   
    int a;
    printf("Enter 1 to insert node at beginning");
    printf("\nEnter 2 to insert node at end");
    printf("\nEnter 3 to display");
    printf("\nEnter 4 to exit");
   
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&a);
        switch(a)
        {
            case 1 : printf("\nInserting node at beginning");insert_beg();break;
            case 2 : printf("\nInserting node at the end");insert_end();break;
            case 3 : printf("Display");display();break;
            case 4 : exit(0);
        }
    }
    getch();
    return 0;
}

// Function to insert value at beginning
void insert_beg()
{
    struct node *temp;
    // Using malloc for dynamic memory allocation
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter a number : ");
    scanf(" %d",&temp->data);
    temp->link=NULL;
    if(start==NULL)
        start=temp;
    else 
    {
        temp->link=start;
        start=temp;
    }  
}

// Function to insert the value at the end
void insert_end()
{
    struct node *temp,*top;
    // Using malloc for dynamic memory allocation
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter a number : ");
    scanf(" %d",&temp->data);
    temp->link=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        top=start;
        while(top!=NULL)
        {
            top=top->link;
        }
        top->link=temp;
        temp=top;
    }  
}

// Function to display the link list
void display()
{
    struct node *top;
    if(start==NULL)
        printf("\nThe link list is empty\n");
    else   
    {
        top = start;
        while(top!=NULL)
        {
            printf("\nElements are : %d",top->data);
            top=top->link;
        }
    }
}


********* Link list implementation ***???******
