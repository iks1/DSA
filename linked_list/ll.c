#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void transversing(struct node* p){
    while(p!=NULL){
        printf("The element is : %d\n",p->data);
        p=p->next;
    }   
}


int main(){
    //declaring structure pointers
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    //assigning memory to structure nodes
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    //creating the linked list
    head->data=3;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=1;
    fourth->next=NULL;

    transversing(head);


    return 0;
}