#include<stdio.h>
//#include<stdlib.h
#include"stack.h"
#include"extern.h"

int pop(void)
{
    int data;
    if(isEmpty())
    {
        printf("stack overflow\n");
        return 0;
    }
    else
    {
        data = arr[top];
        top=top-1;
        return data;
    }
    
}