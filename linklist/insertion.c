#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node * next;
};

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


printf("First node data: %d\n", head->data);
printf("Second node data: %d\n", second->data);
printf("Second node data: %d\n", third->data);

printf("%d->%d->%d ",head->data, second->data,third->data);

    return 0;
}
