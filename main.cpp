#include <iostream>
#include "text.h"
void menu(){
    printf("1 - Enter Text\n");
    printf( "2 - Print Text\n");
    printf( "3 -Text Length\n");
    printf( "4 -Change To Big Letters\n");
    printf( "5 -Stop Program\n");
}
int main() {
    char text[100] = " ";
    int choice = 0 ;
    do{
        menu();
        puts("choice = ");
        scanf("%d",&choice);
        clear();
        switch(choice)
        {
            case 1:
                entertext(text);
                break;
            case 2:
                printtext(text);
                break;
            case 3:
                printf("Text length = %d\n", count(text));
                break;
            case 4:
                bigLetters(text);
                puts("Change To Big Letters\n");
                break;
            case 5:
                break;
        }
    }while( choice!=5);
}
