#include<stdio.h>
#include <stdlib.h>
struct stack{
    int size ;
    int top;
    int * arr;  // to allocate memory dynamically
};

// check to empty
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }else {
        return 0;
    }
}

//  check to full
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else {
        return 0;
    }
}



    //push
    void push(struct stack *ptr ,int val){
        if(isFull(ptr)){
        printf("stackoverflow");
       }else{
        ptr->top++;    // ptr->top is value so it can be used in   array 
        ptr->arr[ptr->top]=val;
       }
    }


       //pop
    int pop(struct stack *ptr ){
        if(isEmpty(ptr)){
            printf("stack underflow");
            return -1;
        }else{
            int val = ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
    }


// stack top and bottom 
int stacktop(struct stack *s){
    return s->arr[sp->top];
}


int stackbottom(struct stack *s){
    return s->arr[0];
}




int main(){
//   struct stack s;            yha pe s stack h or niche s* pointer h
//   s.size = 80;
//   s.top = -1;
//   s.arr = (int *)malloc(s.size * sizeof(int));


     struct stack *s= (struct stack *)malloc(sizeof(struct stack));  // to store  address of structure
    // struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    // if (s == NULL) {
    //     printf("Memory allocation failed for stack structure.\n");
    //     return -1;
    // } 
     s->size = 10;
     s->top=-1;
     s->arr = (int *)malloc(s->size * sizeof(int));
    printf("stack has been created successfully\n");
    printf("%d\n",isFull(s));
    printf("%d\n",isEmpty(s));


    push(s,50);


    printf("after pushing%d\n",isFull(s));
    printf("after pulling%d\n",isEmpty(s));


     // checking stack is empty or not
    if (isEmpty(s))
    {
       printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    




 return 0;
}
