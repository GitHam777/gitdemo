#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int stack[MAX];
int top = 0;
int menu()
{
    int ch;
    printf("Push\n");
    printf("Pop\n");
    printf("Display\n");
    printf("Quit\n");
    scanf("%d", &ch);
    return ch;
}
void push()
{
    int data;
    if(top == MAX)
    {
        printf("STACK OVAAAAAFLOOOOOO");
        return;
    }
    else
    {
        printf("Enter Data: ");
        scanf("%d",&data);
        stack[top] = data;
        top++;
        printf("Data pushed in");
    }
}
void main()
{
    int chs;
    do
    {
        chs = menu();
        switch(chs)
        {
            case 1: push();
                    break;
            case 4: exit(0);

        }

    } while (1);
    
}