#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int arr[5];
int top=-1;
int data;
int main()
{
    int ch;
    while(1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.exit\n");
        printf("enter your choice");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            printf("enter element to enter");
            scanf("%d",&data);
            push(data);
            break;

            case 2:
            data=pop();
            printf("poped item is:%d\n",data);
            break;

            case 3:display();
            break;

            case 4:exit(1);
            break;

            default:printf("wrong choice");
            break;
        }
    }
    return 0;
}