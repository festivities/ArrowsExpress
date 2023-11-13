#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

int main(void){
    // all calls of this function with this parameter will flush the terminal, Windows only
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

    // arrays and structs are unfortunately not allowed, therefore hardcode all seat values manually
    bool seat1Taken = false;
    unsigned int seat1ID = 0;
    bool seat2Taken = false;
    unsigned int seat2ID = 0;
    bool seat3Taken = false;
    unsigned int seat3ID = 0;
    bool seat4Taken = false;
    unsigned int seat4ID = 0;
    bool seat5Taken = false;
    unsigned int seat5ID = 0;
    bool seat6Taken = false;
    unsigned int seat6ID = 0;
    bool seat7Taken = false;
    unsigned int seat7ID = 0;
    bool seat8Taken = false;
    unsigned int seat8ID = 0;
    bool seat9Taken = false;
    unsigned int seat9ID = 0;
    bool seat10Taken = false;
    unsigned int seat10ID = 0;
    bool seat11Taken = false;
    unsigned int seat11ID = 0;
    bool seat12Taken = false;
    unsigned int seat12ID = 0;
    bool seat13Taken = false;
    unsigned int seat13ID = 0;
    bool seat14Taken = false;
    unsigned int seat14ID = 0;

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
                displaySchedule(departureTime);
                break;
            case 4:
                updateDepartureTime(&departureTime);
                // as departure time is updated, commit a sin by resetting all seat values manually
                seat1Taken = false;
                seat1ID = 0;
                seat2Taken = false;
                seat2ID = 0;
                seat3Taken = false;
                seat3ID = 0;
                seat4Taken = false;
                seat4ID = 0;
                seat5Taken = false;
                seat5ID = 0;
                seat6Taken = false;
                seat6ID = 0;
                seat7Taken = false;
                seat7ID = 0;
                seat8Taken = false;
                seat8ID = 0;
                seat9Taken = false;
                seat9ID = 0;
                seat10Taken = false;
                seat10ID = 0;
                seat11Taken = false;
                seat11ID = 0;
                seat12Taken = false;
                seat12ID = 0;
                seat13Taken = false;
                seat13ID = 0;
                seat14Taken = false;
                seat14ID = 0;
                break;
            default: break;
        }

        system("cls");
    } while(choice != 5);

    system("cls"); printf("Stored runtime data are discarded as this program closes.\n"); Sleep(3000);

    return 0;
}
