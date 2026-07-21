#include <stdio.h>
int arr[3];
int top =-1;
void push (int value)
{
top++;
arr[top]=value;
}
int pop()
{
int value = arr[top];
top--;
return value;
}
int main(){
push(5);
push(10);
printf("%d \n",pop());
printf("%d \n ",pop());
return 0;
}
