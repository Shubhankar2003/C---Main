#include <stdio.h>
#define size 50
int stack[size];
int top = -1;

void push(int x)
{
    if (top == size)
    {
        printf("%s","Stack overflow\n");
    }
    else
    {
        top = top + 1;
        stack[top] = x;
        printf("%s","Item added\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack  is empty\n");
    }
    else
    {
        int p = stack[top];
        top = top - 1;
        printf("%d, item removed\n",p);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d, is the peek element: \n", stack[top]);
    }
}

void display()
{
    printf("%s", "The elements are: \n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ->", stack[i]);
        printf("\n");
    }
}

int main()
{
    int ch;

    while (1)
    {
        printf("%s", "Enter your choice (1: Push, 2: Pop, 3: Peek, 4: Display, 5: Exit): \n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
        {
        int p;
            printf("%s", "Enter the value : ");
            scanf("%d",&p);
            push(p);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            return 0;
        }
        default:
        {
            printf("s", "Invalid choice\n");
            break;
        }
        }
    }
}
