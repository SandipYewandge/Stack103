#include<stdio.h>
#include"stack.h"
#include"extern.h"
void display()
{
    int i;
    if(isEmpty())
    {
        printf("stack is empty\n");
        return;
    }
    printf("stack elements:\n\n");
    for(i=top;i>=0;i--)
    {
         printf("%d\n",arr[i]);
    }
    printf("\n");      

}