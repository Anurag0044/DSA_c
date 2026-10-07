#include <stdio.h>h>
#define n 5
int stack[n];
int top= -1;
int push()
{
    int value;
    if(top == n-1)
    {
        printf("stack overflowing \n");
    }
    else{
        printf("enter stack elements \n");
        scanf("%d\n " ,&value);
        top++;
        stack[top]=value;
    }
}
int pop()
{
    if(top ==-1)
    {
        printf("stack underflow\n");
    }
    else {
        printf("stack removed element :\n%d\n",stack[top]);
        top --;
    }
}
int display()
{
    if(top ==-1)
    {
        printf("the stack is empty\n");
    }
    else {
        printf("stack elements are :-\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    }
int main()
{
    int choice;
    for(;;){
printf("1 -> push\n");
printf("2 -> pop\n");
printf("3 -> display\n");
printf("4 -> exit\n");
scanf("%d\n",&choice);

if(choice==1)
    push();
else  if(choice==2)
    pop();
   else if(choice==3)
       display();
   else if(choice ==4)
       break;
else 
    printf("invalid choice\n");
    }
return 0;
}


