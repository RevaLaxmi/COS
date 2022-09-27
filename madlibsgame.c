#include <stdio.h>
#include <stdlib.h>

int main()

{
    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("enter a color: ");
    scanf("%s", color);
    printf("enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("enter a celebrity name: ");
    scanf("%s", celebrity);

    printf('roses are %s\n', color);
    printf('%s are blue\n', pluralNoun);
    printf('I love %s\n', celebrity);

    return 0;

}

//in the code written above the only problem is the fact that lets say we want to give an input of a firstname lastname, the output will only result in firstname not lastname/
//to change this we will take two inputs tso %s%s and instead of celebrity make it celebrityF celebrityL ie lastname firstname /
//basically c makes for very specific inputs /
