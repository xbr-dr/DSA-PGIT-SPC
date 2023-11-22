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
    struct node *temp=NULL;
    struct node *t=NULL;

    // allocate memory
    one=malloc();
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
    printlinkedlist(head);
    printf("\n");
    two->next=NULL;
    free(three);
    printlinkedlist(head);
    
    /*temp=head;
    while(temp->next!=NULL)
    {
    	t=temp;
    	temp=temp->next;
    	
	}
	temp->next=NULL;
	free(temp); */
    
}
