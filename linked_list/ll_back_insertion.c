#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void transversing(struct node* p){
    while(p!=NULL){
        printf("The element is : %d\n",p->data);
        p=p->next;
    }   
}
struct node *backinsertion(struct node *head,int n){
    struct node *ptr,*p;
    ptr=(struct node*)malloc(sizeof(struct node));
    p=(struct node*)malloc(sizeof(struct node));
    ptr->data=n;
    p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}


int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=3;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=1;
    fourth->next=NULL;

    head=backinsertion(head,5);

    transversing(head);




    return 0;
}