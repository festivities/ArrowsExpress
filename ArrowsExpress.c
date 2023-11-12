#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

int main(void){
    // all calls of this function flush the terminal, Windows only
    system("cls");
    printf("$$___$$___________$$__________________________________\n"
           "$$___$$___________$$__________________________________\n"
           "$$___$$__$$$$_____$$_____$$$$____$$$$___$$$$$$___$$$$_\n"
           "$$_$_$$_$$__$$____$$____$$__$$__$$__$$__$$_$_$$_$$__$$\n"
           "$$_$_$$_$$__$$____$$____$$______$$__$$__$$_$_$$_$$__$$\n"
           "$$_$_$$_$$$$$$____$$____$$______$$__$$__$$_$_$$_$$$$$$\n"
           "_$$_$$__$$________$$____$$______$$__$$__$$_$_$$_$$____\n"
           "_$$_$$__$$________$$____$$__$$__$$__$$__$$_$_$$_$$____\n"
           "_$$_$$___$$$$___$$$$$$___$$$$____$$$$___$$___$$__$$$$_\n"
           "------------------------------------------------------\n"
           "========TO THE ARROWS EXPRESS BOOKING SYSTEM==========\n");
    // all calls of this function will have the program pause for user-specified milliseconds
    Sleep(3000);
    system("cls");

    // increment every successful booking
    unsigned int ticketCount = 0;
    // must be a value between 0 and 23, below 11 being AM and above 11 being PM 
    unsigned int departureTime = 4;

    // must be a value between 1 and 5
    unsigned int choice = 0;

    do{
        displayMenu();

        // foolproof input system, users are forced to have valid inputs
        while(scanf("%u", &choice) != 1 || choice < 1 || choice > 5){
            printf("Choice must be a number visible in the menu!\n"); Sleep(2000); system("cls");
            // all statements like this flush stdin
            while(getchar() != '\n');
            displayMenu();
        }

        switch(choice){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                updateDepartureTime(&departureTime);
                break;
            default: break;
        }

        system("cls");
    } while(choice != 5);

    system("cls"); printf("Stored runtime data are discarded as this program closes.\n"); Sleep(3000);

    return 0;
}
