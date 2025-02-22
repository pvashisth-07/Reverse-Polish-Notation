/* Purpose: Infix to postfix(reverse polish notation)
Author: Pranav Vashisth*/

/* 
Test Cases(edge cases):

1.  A + ( B - C ) * D       ->   A B C - D * +
2.  A * ( B + C * D )       ->   A B C D * + *
3.  ( A + B ) / ( C - D ) * E   ->   A B + C D - / E *
4.  ( A + B * ( C - D ) ) ^ E   ->   A B C D - * + E ^
5.  A * ( B + C / D ) - E   ->   A B C D / + * E -

*/


#include <stdio.h>
#include <stdlib.h>
char stack[50];
char postfix[50];
int top;
int match(char a, char b);
void push(int ch);
int pop();
int peek();
int precedence(char ch);
int isempty();
int main()
{
    top = -1;
    int i = 0, j = 0;
    char ch, x, y;
    char infix[50];
    printf("Enter infix: ");
    fgets(infix, 50, stdin);
    while ((infix[i] != '\0'))
    {
        ch = infix[i];
        if (ch >= '0' && ch <= '9')
        {
            postfix[j] = ch;
            j++;
        }
        else
        {
            if (isempty())
            {
                top++;
                stack[top] = ch;
            }
            else if (ch == '(')
            {
                push(ch);
            }
            else if (ch == ')')
            {
                while (!isempty() && peek() != '(')
                {
                    postfix[j++] = pop();
                }
                if (!isempty() && peek() == '(')
                    pop();
            }
            else
            {
                y = peek();
                x = ch;
                while ((precedence(y) >= precedence(x)) && !(isempty()))
                {
                    y = pop();
                    postfix[j] = y;
                    j++;
                    if (!isempty())
                        y = peek();
                }
                push(ch);
            }
        }
        i++;
    }
    while (!isempty())
    {
        y = pop();
        postfix[j] = y;
        j++;
    }
    printf("Postfix is: %s", postfix);
    return 0;
}
int isempty()
{
    return top == -1;
}
void push(int ch)
{
    if (top == 49)
        printf("Stack Overflow");
    else
    {
        top++;
        stack[top] = ch;
    }
}
int pop()
{
    if (isempty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}
int peek()
{
    if (isempty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top];
}
int precedence(char ch)
{
    switch (ch)
    {
    case '^':
        return 3;
    case '*':
    case '/':
    case '%':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}