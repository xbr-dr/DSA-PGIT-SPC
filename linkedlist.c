#include<stdio.h>
#include<stdlib.h>

// creating a node
struct node
{
    int value;
    struct node *next;
};	

// print the linked list value
void printlinkedlist(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->value);
        p=p->next;
    }
}

int main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    // allocate memory
    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));

    //assingning values
    one->value=10;
    two->value=20;
    three->value=30;

    //connecting nodes
    one->next=two;
    two->next=three;
    three->next=NULL;

    //printing node value
    head = one;
    
    //adding a node at beginning
    struct node *newnode=NULL;
    newnode=malloc(sizeof(struct node));
    newnode->value=40;
    newnode->next=head;
    head=newnode;
    printlinkedlist(head);
}
