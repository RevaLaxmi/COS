#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayhi("mike",40);
    return 0;
}

void sayhi(char name[], int age){

    printf("hello %s, you are %d age", name, age);

}