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
struct node *afternodeinsertion(struct node *head,int n,struct node *prevnode){

    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=n;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
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

    head=afternodeinsertion(head,5,third);

    transversing(head);




    return 0;
}