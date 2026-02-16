#include <stdio.h>
int main()
{
    float a,b;
    char op;
    printf("Enter a operator:");
    scanf("%f %c %f", &a, &op, &b);
    switch(op){
        case '+': printf("Result = %.2f", a+b); break;
        case '-': printf("Result = %.2f", a-b); break;
        case '*': printf("Result = %.2f", a*b); break;
        case '/':
        if(b!=0) printf("Result = %.2f", a/b);
        else printf("Not possible");
        break;
        default: printf("Invalid operator");
    }
    return 0;
}