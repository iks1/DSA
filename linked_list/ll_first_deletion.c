#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* deletefirst(struct node *head){
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    head=head->next;
    free(ptr);

    return head;

}

void print(struct node *p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    } 
}

int main(){
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=6;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=0;
    third->next=NULL;
    print(head);
    head=deletefirst(head);
    print(head);

    return 0;
}