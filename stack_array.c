#include <stdio.h>
#define MAX 5
int stack [MAX];
int top = -1;
void push (int value){
    if (top== MAX-1){
        printf("stack overflow\n");
    }else {
         top++;
         stack[top]=value;
         printf("%d pushed into stack\n",value);
    }
} void pop(){
    if (top==-1){
        printf("stack underflow\n");
    }
    else{
        printf("%d poopped from stack\n",stack[top]);
        top--;
    }
}
void peek (){
    if (top == -1){
        printf("stack is empty\n");
    }else{
        printf("top elements = %d\n",stack[top]);
    }
}
void display(){
    if (top == -1)
    {
        printf("stack is empty\n");
    }else{
        printf("stack elements :\n");
        for(int i= top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    push (10);
    push (20);
    push (30);
    push(40);
    display();
    peek();
    pop();
    display();
    return 0;
}

