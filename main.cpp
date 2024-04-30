#include <iostream>
#include "text.h"
void menu(){
    printf("1 - Enter Text\n");
    printf( "2 - Print Text\n");
    printf( "3 -Stop Program\n");
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
                break;
        }
    }while( choice!=3);
}
