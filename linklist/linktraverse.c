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



           //printf("LINKED LIST INSERTION AT FIRST");
struct node * insertatfirst(struct node * head, int data){
     struct node* ptr =(struct node*)malloc(sizeof(struct node));
     ptr->next = head;
     ptr->data = data;
     return ptr;
    
}


          // printf("LINKED LIST INSERTION AT INDEX");
struct node * insertatindex(struct node * head, int data,int index){
     struct node* ptr =(struct node*)malloc(sizeof(struct node));
     struct node* p=head;
     int i=0;
     while(i!=index-1){
        p=p->next;
        i++;
     } 

     ptr->data = data;
     ptr->next = p->next;
     p->next=ptr;
     return  head;
}



           //printf("LINKED LIST INSERTION AT LAST");
struct node * insertatlast(struct node * head, int data){
     struct node* ptr =(struct node*)malloc(sizeof(struct node));
     ptr->data = data;
     struct node* p=head;
     while(p->next!=NULL){
        p=p->next;
     }
     p->next=ptr;
     ptr->next = NULL;
     return head;
}


           //printf("LINKED LIST INSERTION AT NODE");
struct node * insertatnode(struct node * head,struct node * prevnode, int data){
     struct node* ptr =(struct node*)malloc(sizeof(struct node));
     ptr->data = data;
    
     ptr->next = prevnode->next;
     prevnode->next=ptr;
     return head;
}



            // reverse 
 struct node* reverseList(struct node* head) {
    struct node* prev = NULL;   // Pointer to track the previous node
    struct node* current = head; // Pointer to track the current node
    struct node* next = NULL;    // Pointer to track the next node

    while (current != NULL) {
        next = current->next;   // Store the next node
        current->next = prev;   // Reverse the link
        prev = current;         // Move prev forward
        current = next;         // Move current forward
    }
    
    return prev; // New head of the reversed list
}



           // length 

int getLength(struct node* head) {
    int length = 0;                 // Initialize length counter
    struct node* current = head;    // Start from the head of the list

    // Traverse the linked list
    while (current != NULL) {
        length++;                    // Increment the length counter
        current = current->next;     // Move to the next node
    }

    return length;                  // Return the length of the linked list
}



int main(){
   
    struct node * head;
    struct node * second;
    struct node * third;

    //memory alocation
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data =7;
    head->next=second;

    second->data =77;
    second->next=third;

    third->data =777;
    third->next=NULL;


  
   linkedlisttraverse(head);
   printf("\n");
//    head=insertatfirst(head,66); 
   linkedlisttraverse(head);printf("\n");
   head=insertatindex(head,56,2); printf("\n");// here head is replacing with the old
//    linkedlisttraverse(head);printf("\n");
//    insertatlast(head,100);
//    linkedlisttraverse(head);printf("\n");
   head=insertatnode(head,second,123);
   linkedlisttraverse(head);printf("\n");
      
//       head = reverseList(head);
//       linkedlisttraverse(head);
      
//       int length = getLength(head);
//     printf("Length of the linked list: %d\n", length);




printf("%d->%d->%d ",head->data, second->data,third->data);

    return 0;
}





