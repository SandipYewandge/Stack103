#include<stdio.h>

#include"stack.h"
#include"extern.h"

void push(int data)
{
    if(isFull())
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    arr[top]=data;
}