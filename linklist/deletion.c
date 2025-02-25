#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node * next;
};
            /// linked list traverse//////////////



          //printf("LINKED LIST TRAVERSAL\n");
void linkedlisttraverse(struct node * ptr){
    while(ptr!=NULL){
    printf(" elemnt is :%d\n",ptr->data);
    ptr = ptr->next;
    }
}
       
              // deletion at first 

    struct node * deletionatfirst(struct node * head){
        struct node* ptr =head;
        head= head->next;
        free(ptr);
        return head;  // return must
    }


             // deletion at index 

    struct node * deletionatindex(struct node * head,int index){
        struct node* p =head;
        struct node* q =head->next;

        for(int i=0;i<index-1;i++){
            p=p->next;
            q=q->next;

        }
        p->next=q->next;
        free(q);
        return head;  // return must
    }


          // deletion at last

    struct node * deletionatatlast(struct node * head){
        struct node* p =head;
        struct node* q =head->next;
        while(q->next!=NULL){
            p=p->next;
            q=q->next;

        }
        p->next=NULL;
        free(q);
        return head;  // return must
    }


            // deletion at node

    struct node * deletionatnode(struct node * head,int value){
        struct node* p =head;
        struct node* q =head->next;

        while(q->data!=value && q->next!=NULL){
            p=p->next;
            q=q->next;

        }
        if(q->data==value){
           p->next=q->next;
           free(q); 
        }
        return head;  // return must
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
    fourth->next=NULL;


  
//    linkedlisttraverse(head);
//     printf("\n");
//    //head=deletionatfirst(head);
//    linkedlisttraverse(head);
//     printf("\n");
//     //head=deletionatindex(head,2);
//     linkedlisttraverse(head);
//     printf("\n");
//     //head=deletionatatlast(head);
//     linkedlisttraverse(head);
//     printf("\n");
    head=deletionatnode(head,7777);
    linkedlisttraverse(head);
    printf("\n");


printf("%d->%d->%d ",head->data, second->data,third->data);

    return 0;
}

