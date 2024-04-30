#include <iostream>
#include "text.h"
void menu(){
    printf("1 - Enter Text\n");
    printf( "2 - Print Text\n");
    printf( "3 -Text Length\n");
    printf( "4 -Stop Program\n");
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
                printf("Text length = %d", count(text));
                break;
            case 4:
                break;
        }
    }while( choice!=4);
}
