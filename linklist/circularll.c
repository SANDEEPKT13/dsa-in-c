#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node * next;
};
            /// linked list traverse//////////////



          //printf("LINKED LIST TRAVERSAL\n");
void linkedlisttraverse(struct node * head){
    struct node * ptr = head;
    do{
        printf(" elemnt is :%d\n",ptr->data);
        ptr=ptr->next;
       }while(ptr!=head);
}
       


       // insertion at first 


struct node* insertatfirst(struct node* head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p =head->next;
    while (p->next!=head)
    {
        p=p->next;
    }  // at this point  p points to last
     p->next = ptr;
     ptr->next = head;
     head = ptr;
     
     return head;

}
     

int main(){
   
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    //memory alocation
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->data =7;
    head->next=second;

    second->data =77;
    second->next=third;

    third->data =777;
    third->next=fourth;

    fourth->data =7777;
    fourth->next=head;


  
   linkedlisttraverse(head);
    printf("\n");
   head=insertatfirst(head,200);
   linkedlisttraverse(head);
   printf("\n"); 


    return 0;
}

