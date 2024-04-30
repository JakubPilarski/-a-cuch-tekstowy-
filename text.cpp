#include <iostream>
#include "text.h"
void entertext(char *text) {
    printf("Enter Text :\n");
    fgets(text,99,stdin);
}
void printtext(char *text)
{printf("%s\n",text);}
void clear(void)
{
    while(getchar()!= '\n');
}
