#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("enter first number");
    scanf("%d", &num1);
    printf("enter second number");
    scanf("%d", &num2);

    printf("answer: %d", num1+num2);

    return 0;
}

/* however the error with this code is that it wull only let us enter intergers and not
take into consideration say ofr 5.4 +2 - the 0.4
So in this case we use something called double instead of int

int main()
{
    double num1;
    double num2;
    printf("enter first number");
    scanf("%lf", &num1);
    printf("enter second number");
    scanf("%lf", &num2);

    printf("answer: %f", num1+num2);

    return 0;
}

*/