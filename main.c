#include<stdio.h>
#include<stdlib.h>

int main()
{
    char* name = malloc(30);

    name = "Robin Parker";

    printf("I am %s \n", name);

    return 0;
}