#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(void)
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=4;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    //manually pushing the elements in the array;
    s->arr[0]=23;
    s->top++;
    s->arr[1]=32;
    s->top++;
    s->arr[2]=54;
    s->top++;
    // s->arr[3]=11;
    // s->top++;
    if(isEmpty(s))
    {
        printf("Stack Empty\n");
    }
    else{
        printf("Stack Non-Empty\n");
    }
    if(isFull(s))
    {
        printf("Stack is Full\n");
    }
    else
    {
        printf("Space reamins by: %d\n",(s->size-1)-s->top);
    }
}
