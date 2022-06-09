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
struct node *forwardinsertion(struct node *head,int n,int index){

    struct node *ptr,*p;
    ptr=(struct node*)malloc(sizeof(struct node));
    p=(struct node*)malloc(sizeof(struct node));
    p=head;
    ptr->data=n;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
        
    }
    ptr->next=p->next;
    p->next=ptr;

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

    head=forwardinsertion(head,5,2);

    transversing(head);




    return 0;
}