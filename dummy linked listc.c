#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node *next
 };
 
 void main(){
 	struct node *head;
 	struct node *one=NULL;
 	struct node *two=NULL;
 	
 	one=malloc(sizeof(int));
 	two=malloc(sizeof(struct node));
 	
 	one->data=20;
 	two->data=30;
 	
 	one->next=two;
 	two->next=NULL;
 	
 	head=one;
 	printf("%d",one->data);
 	printf("%d",two->data);
 }
