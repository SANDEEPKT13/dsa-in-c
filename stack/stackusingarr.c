#include<stdio.h>
#include <stdlib.h>
struct stack{
    int size ;
    int top;
    int * arr;
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



int main(){
//   struct stack s;
//   s.size = 80;
//   s.top = -1;
//   s.arr = (int *)malloc(s.size * sizeof(int));


     struct stack *s;
    // struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    // if (s == NULL) {
    //     printf("Memory allocation failed for stack structure.\n");
    //     return -1;
    // } 
     s->size = 80;
     s->top=-1;
     s->arr = (int *)malloc(s->size * sizeof(int));


     // checking stack is empty or not
    if (isEmpty(s))
    {
       printf("stack is empty");
    } else {
        printf("stack is not empty");
    }
    

 return 0;
}
