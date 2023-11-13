#include "helpers.h"

void AMPM(const unsigned int time, char (*result)[10]){ 
    snprintf(result, 10, "%d%s", (time > 11) ? time - 12 : time, (time > 11) ? "PM" : "AM");
}

void updateDepartureTime(unsigned int *const departureTime){
    system("cls");
    if(*departureTime < 19){
        char buffer[10]; AMPM(*departureTime, buffer);
        printf("The current departure time is %s, please set a new departure time.\n", buffer);
        printf("New departure time input must be a value between 4AM (4) and 7PM (19), later than the "
               "current (%s) departure time, and not between 12PM to 1PM: ", buffer);
        unsigned int newTime = 0;
        while(scanf("%u", &newTime) != 1 || newTime <= *departureTime || newTime > 19 
              || newTime == 12 || newTime == 13){
            system("cls");
            printf("New departure time input must be a value between 4AM (4) and 7PM (19), later than the "
                   "current (%s) departure time, and not between 12PM to 1PM: ", buffer);
            while(getchar() != '\n');
        }
        while(getchar() != '\n');
        *departureTime = newTime;
        system("cls");
        AMPM(newTime, buffer);
        printf("New departure time set to %s! Returning to menu...", buffer); Sleep(3000); system("cls");
    }
    else{
        printf("There are no more scheduled bus trips after 7PM. "
               "Returning to menu..."); Sleep(3000); system("cls");
    }
}

void displayBus(const bool seat1Taken,
                const unsigned int seat1ID,
                const bool seat2Taken,
                const unsigned int seat2ID,
                const bool seat3Taken,
                const unsigned int seat3ID,
                const bool seat4Taken,
                const unsigned int seat4ID,
                const bool seat5Taken,
                const unsigned int seat5ID,
                const bool seat6Taken,
                const unsigned int seat6ID,
                const bool seat7Taken,
                const unsigned int seat7ID,
                const bool seat8Taken,
                const unsigned int seat8ID,
                const bool seat9Taken,
                const unsigned int seat9ID,
                const bool seat10Taken,
                const unsigned int seat10ID,
                const bool seat11Taken,
                const unsigned int seat11ID,
                const bool seat12Taken,
                const unsigned int seat12ID,
                const bool seat13Taken,
                const unsigned int seat13ID,
                const bool seat14Taken,
                const unsigned int seat14ID){
    char seat1IDstr[20] = { 0 };
    char seat2IDstr[20] = { 0 };
    char seat3IDstr[20] = { 0 };
    char seat4IDstr[20] = { 0 };
    char seat5IDstr[20] = { 0 };
    char seat6IDstr[20] = { 0 };
    char seat7IDstr[20] = { 0 };
    char seat8IDstr[20] = { 0 };
    char seat9IDstr[20] = { 0 };
    char seat10IDstr[20] = { 0 };
    char seat11IDstr[20] = { 0 };
    char seat12IDstr[20] = { 0 };
    char seat13IDstr[20] = { 0 };
    char seat14IDstr[20] = { 0 };
    snprintf(seat1IDstr, 20, "%d", seat1ID);
    snprintf(seat2IDstr, 20, "%d", seat2ID);
    snprintf(seat3IDstr, 20, "%d", seat3ID);
    snprintf(seat4IDstr, 20, "%d", seat4ID);
    snprintf(seat5IDstr, 20, "%d", seat5ID);
    snprintf(seat6IDstr, 20, "%d", seat6ID);
    snprintf(seat7IDstr, 20, "%d", seat7ID);
    snprintf(seat8IDstr, 20, "%d", seat8ID);
    snprintf(seat9IDstr, 20, "%d", seat9ID);
    snprintf(seat10IDstr, 20, "%d", seat10ID);
    snprintf(seat11IDstr, 20, "%d", seat11ID);
    snprintf(seat12IDstr, 20, "%d", seat12ID);
    snprintf(seat13IDstr, 20, "%d", seat13ID);
    snprintf(seat14IDstr, 20, "%d", seat14ID);
    printf("-------------------------------------------------------------\n"
           "|                                                           |\n"
           "|                        BUS LAYOUT                         |\n"
           "|                                        S11:%s              |\n"
           "|       S1: %s   S2: %s   S5: %s   S8: %s                       |\n"
           "|                                        S12:%s              |\n"
           "|               S3: %s   S6: %s   S9: %s                       |\n"
           "|                                        S13:%s              |\n"
           "|       Driver  S4: %s   S7: %s   S10:%s                       |\n"
           "|                                        S14:%s              |\n"
           "-------------------------------------------------------------\n"
           "Seat 1 belongs to %s\n"
           "Seat 2 belongs to %s\n"
           "Seat 3 belongs to %s\n"
           "Seat 4 belongs to %s\n"
           "Seat 5 belongs to %s\n"
           "Seat 6 belongs to %s\n"
           "Seat 7 belongs to %s\n"
           "Seat 8 belongs to %s\n"
           "Seat 9 belongs to %s\n"
           "Seat 10 belongs to %s\n"
           "Seat 11 belongs to %s\n"
           "Seat 12 belongs to %s\n"
           "Seat 13 belongs to %s\n"
           "Seat 14 belongs to %s\n",
           seat11Taken ? "X" : " ", seat1Taken ? "X" : " ", seat2Taken ? "X" : " ", seat5Taken ? "X" : " ", seat8Taken ? "X" : " ",
           seat12Taken ? "X" : " ", seat3Taken ? "X" : " ", seat6Taken ? "X" : " ", seat9Taken ? "X" : " ", seat13Taken ? "X" : " ",
           seat4Taken ? "X" : " ", seat7Taken ? "X" : " ", seat10Taken ? "X" : " ", seat14Taken ? "X" : " ",
           seat1Taken ? seat1IDstr : "no one", seat2Taken ? seat2IDstr : "no one", seat3Taken ? seat3IDstr : "no one",
           seat4Taken ? seat4IDstr : "no one", seat5Taken ? seat5IDstr : "no one", seat6Taken ? seat6IDstr : "no one",
           seat7Taken ? seat7IDstr : "no one", seat8Taken ? seat8IDstr : "no one", seat9Taken ? seat9IDstr : "no one",
           seat10Taken ? seat10IDstr : "no one", seat11Taken ? seat11IDstr : "no one", seat12Taken ? seat12IDstr : "no one",
           seat13Taken ? seat13IDstr : "no one", seat14Taken ? seat14IDstr : "no one");
}

void bookTrip(bool *const seat1Taken,
              unsigned int *const seat1ID,
              bool *const seat2Taken,
              unsigned int *const seat2ID,
              bool *const seat3Taken,
              unsigned int *const seat3ID,
              bool *const seat4Taken,
              unsigned int *const seat4ID,
              bool *const seat5Taken,
              unsigned int *const seat5ID,
              bool *const seat6Taken,
              unsigned int *const seat6ID,
              bool *const seat7Taken,
              unsigned int *const seat7ID,
              bool *const seat8Taken,
              unsigned int *const seat8ID,
              bool *const seat9Taken,
              unsigned int *const seat9ID,
              bool *const seat10Taken,
              unsigned int *const seat10ID,
              bool *const seat11Taken,
              unsigned int *const seat11ID,
              bool *const seat12Taken,
              unsigned int *const seat12ID,
              bool *const seat13Taken,
              unsigned int *const seat13ID,
              bool *const seat14Taken,
              unsigned int *const seat14ID,
              const unsigned int departureTime,
              unsigned int *const numberOfSeats,
              unsigned int *const ticketCount){
    if(!(*numberOfSeats)){
        system("cls");
        printf("There are no more seats available for this trip. Returning to menu...");
        Sleep(3000); system("cls");
    }
    else{
        unsigned int choice = 0;
        char departureTimeString[10] = { 0 };
        AMPM(departureTime, departureTimeString);
        system("cls");

        displayBus(*seat1Taken, *seat1ID, *seat2Taken, *seat2ID, *seat3Taken, *seat3ID, *seat4Taken, *seat4ID,
                *seat5Taken, *seat5ID, *seat6Taken, *seat6ID, *seat7Taken, *seat7ID, *seat8Taken, *seat8ID,
                *seat9Taken, *seat9ID, *seat10Taken, *seat10ID, *seat11Taken, *seat11ID, *seat12Taken, *seat12ID,
                *seat13Taken, *seat13ID, *seat14Taken, *seat14ID);
        printf("\nYou are leaving for %s at %s. There are %u available seats. Select a seat from 1 to 14: ",
            manilaLaguna(departureTime) ? "Manila from Laguna" : "Laguna from Manila", departureTimeString, *numberOfSeats);
        while(scanf("%u", &choice) != 1 || choice < 1 || choice > 14){
            system("cls");
            displayBus(*seat1Taken, *seat1ID, *seat2Taken, *seat2ID, *seat3Taken, *seat3ID, *seat4Taken, *seat4ID,
                    *seat5Taken, *seat5ID, *seat6Taken, *seat6ID, *seat7Taken, *seat7ID, *seat8Taken, *seat8ID,
                    *seat9Taken, *seat9ID, *seat10Taken, *seat10ID, *seat11Taken, *seat11ID, *seat12Taken, *seat12ID,
                    *seat13Taken, *seat13ID, *seat14Taken, *seat14ID);
            printf("\nYou are leaving for %s at %s. There are %u available seats. Select a seat from 1 to 14: ",
                manilaLaguna(departureTime) ? "Manila from Laguna" : "Laguna from Manila", departureTimeString, *numberOfSeats);
            while(getchar() != '\n');
        }
        while(getchar() != '\n');

        system("cls");
        int ID = 0;
        printf("Please enter your ID: ");
        while(scanf("%u", &ID) != 1 || ID < 1){
            system("cls");
            printf("Please enter a valid ID: ");
            while(getchar() != '\n');
        }
        while(getchar() != '\n');
        system("cls");

        switch(choice){
            case 1:
                if(!(*seat1Taken)){
                    *seat1Taken = true;
                    *seat1ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 2:
                if(!(*seat2Taken)){
                    *seat2Taken = true;
                    *seat2ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 3:
                if(!(*seat3Taken)){
                    *seat3Taken = true;
                    *seat3ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 4:
                if(!(*seat4Taken)){
                    *seat4Taken = true;
                    *seat4ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 5:
                if(!(*seat5Taken)){
                    *seat5Taken = true;
                    *seat5ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 6:
                if(!(*seat6Taken)){
                    *seat6Taken = true;
                    *seat6ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 7:
                if(!(*seat7Taken)){
                    *seat7Taken = true;
                    *seat7ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 8:
                if(!(*seat8Taken)){
                    *seat8Taken = true;
                    *seat8ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 9:
                if(!(*seat9Taken)){
                    *seat9Taken = true;
                    *seat9ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 10:
                if(!(*seat10Taken)){
                    *seat10Taken = true;
                    *seat10ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 11:
                if(!(*seat11Taken)){
                    *seat11Taken = true;
                    *seat11ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 12:
                if(!(*seat12Taken)){
                    *seat12Taken = true;
                    *seat12ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 13:
                if(!(*seat13Taken)){
                    *seat13Taken = true;
                    *seat13ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 14:
                if(!(*seat14Taken)){
                    *seat14Taken = true;
                    *seat14ID = ID;
                    ++(*ticketCount);
                    --(*numberOfSeats);
                    break;
                }
                printf("That seat is taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            default: break;
        }
        printf("Operation finished. Returning to menu...\n\n"); Sleep(3000); system("cls");
    }
}

void bookCancel(bool *const seat1Taken,
              unsigned int *const seat1ID,
              bool *const seat2Taken,
              unsigned int *const seat2ID,
              bool *const seat3Taken,
              unsigned int *const seat3ID,
              bool *const seat4Taken,
              unsigned int *const seat4ID,
              bool *const seat5Taken,
              unsigned int *const seat5ID,
              bool *const seat6Taken,
              unsigned int *const seat6ID,
              bool *const seat7Taken,
              unsigned int *const seat7ID,
              bool *const seat8Taken,
              unsigned int *const seat8ID,
              bool *const seat9Taken,
              unsigned int *const seat9ID,
              bool *const seat10Taken,
              unsigned int *const seat10ID,
              bool *const seat11Taken,
              unsigned int *const seat11ID,
              bool *const seat12Taken,
              unsigned int *const seat12ID,
              bool *const seat13Taken,
              unsigned int *const seat13ID,
              bool *const seat14Taken,
              unsigned int *const seat14ID,
              const unsigned int departureTime,
              unsigned int *const numberOfSeats,
              unsigned int *const ticketCount){
    if(*numberOfSeats == 14){
        system("cls");
        printf("There are no bookings to be cancelled. Returning to menu...");
        Sleep(3000); system("cls");
    }
    else{
        unsigned int choice = 0;
        char departureTimeString[10] = { 0 };
        AMPM(departureTime, departureTimeString);
        system("cls");

        displayBus(*seat1Taken, *seat1ID, *seat2Taken, *seat2ID, *seat3Taken, *seat3ID, *seat4Taken, *seat4ID,
                *seat5Taken, *seat5ID, *seat6Taken, *seat6ID, *seat7Taken, *seat7ID, *seat8Taken, *seat8ID,
                *seat9Taken, *seat9ID, *seat10Taken, *seat10ID, *seat11Taken, *seat11ID, *seat12Taken, *seat12ID,
                *seat13Taken, *seat13ID, *seat14Taken, *seat14ID);
        printf("\nYou are leaving for %s at %s. There are %u available seats. Select a seat to cancel from 1 to 14: ",
            manilaLaguna(departureTime) ? "Manila from Laguna" : "Laguna from Manila", departureTimeString, *numberOfSeats);
        while(scanf("%u", &choice) != 1 || choice < 1 || choice > 14){
            system("cls");
            displayBus(*seat1Taken, *seat1ID, *seat2Taken, *seat2ID, *seat3Taken, *seat3ID, *seat4Taken, *seat4ID,
                    *seat5Taken, *seat5ID, *seat6Taken, *seat6ID, *seat7Taken, *seat7ID, *seat8Taken, *seat8ID,
                    *seat9Taken, *seat9ID, *seat10Taken, *seat10ID, *seat11Taken, *seat11ID, *seat12Taken, *seat12ID,
                    *seat13Taken, *seat13ID, *seat14Taken, *seat14ID);
            printf("\nYou are leaving for %s at %s. There are %u available seats. Select a seat to cancel from 1 to 14: ",
                manilaLaguna(departureTime) ? "Manila from Laguna" : "Laguna from Manila", departureTimeString, *numberOfSeats);
            while(getchar() != '\n');
        }
        while(getchar() != '\n');

        system("cls");

        switch(choice){
            case 1:
                if((*seat1Taken)){
                    *seat1Taken = false;
                    *seat1ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 2:
                if((*seat2Taken)){
                    *seat2Taken = false;
                    *seat2ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 3:
                if((*seat3Taken)){
                    *seat3Taken = false;
                    *seat3ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 4:
                if((*seat4Taken)){
                    *seat4Taken = false;
                    *seat4ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 5:
                if((*seat5Taken)){
                    *seat5Taken = false;
                    *seat5ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 6:
                if((*seat6Taken)){
                    *seat6Taken = false;
                    *seat6ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 7:
                if((*seat7Taken)){
                    *seat7Taken = false;
                    *seat7ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 8:
                if((*seat8Taken)){
                    *seat8Taken = false;
                    *seat8ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 9:
                if((*seat9Taken)){
                    *seat9Taken = false;
                    *seat9ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 10:
                if((*seat10Taken)){
                    *seat10Taken = false;
                    *seat10ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 11:
                if((*seat11Taken)){
                    *seat11Taken = false;
                    *seat11ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 12:
                if((*seat12Taken)){
                    *seat12Taken = false;
                    *seat12ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 13:
                if((*seat13Taken)){
                    *seat13Taken = false;
                    *seat13ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            case 14:
                if((*seat14Taken)){
                    *seat14Taken = false;
                    *seat14ID = 0;
                    --(*ticketCount);
                    ++(*numberOfSeats);
                    break;
                }
                printf("That seat is not taken! Please try again after returning to the menu.\n");
                Sleep(1000);
                break;
            default: break;
        }
        printf("Operation finished. Returning to menu...\n\n"); Sleep(3000); system("cls");
    }
}

const char *schedCalc(const unsigned int targetTime, const unsigned int departureTime){
    if(departureTime > targetTime) return "XXX";
    else if(departureTime == targetTime) return "<--"; else return "   ";  
}

void displaySchedule(const unsigned int departureTime){
    printf("--------------------------------------------------------------------------------------------------\n"
           "|                                                                                                |\n"
           "|                                  ARROWS EXPRESS SCHEDULE TODAY                                 |\n"
           "|            Depart Manila | Arrive Laguna                Depart Laguna | Arrive Manila          |\n"
           "|  Trip 1-A     4:00 AM        5:00 AM      %s      1-B     5:00 AM        6:00 AM       %s    |\n"
           "|  Trip 2-A     6:00 AM        7:00 AM      %s      2-B     7:00 AM        8:00 AM       %s    |\n"
           "|  Trip 3-A     8:00 AM        9:00 AM      %s      3-B     9:00 AM       10:00 AM       %s    |\n"
           "|  Trip 4-A    10:00 AM       11:00 AM      %s      4-B    11:00 AM       12:00 PM       %s    |\n"
           "|  Trip 5-A     2:00 PM        3:00 PM      %s      5-B     3:00 PM        4:00 PM       %s    |\n"
           "|  Trip 6-A     4:00 PM        5:00 PM      %s      6-B     5:00 PM        6:00 PM       %s    |\n"
           "|  Trip 7-A     6:00 PM        7:00 PM      %s      7-B     7:00 PM        8:00 PM       %s    |\n"
           "|                                                                                                |\n"
           "|                                                                                                |\n"
           "--------------------------------------------------------------------------------------------------\n",
           schedCalc(4, departureTime), schedCalc(5, departureTime), schedCalc(6, departureTime),
           schedCalc(7, departureTime), schedCalc(8, departureTime), schedCalc(9, departureTime),
           schedCalc(10, departureTime), schedCalc(11, departureTime), schedCalc(14, departureTime),
           schedCalc(15, departureTime), schedCalc(16, departureTime), schedCalc(17, departureTime),
           schedCalc(18, departureTime), schedCalc(19, departureTime));
    // all calls of this function with this parameter will have the terminal wait for any key to be pressed
    system("pause");
    printf("Returning to menu..."); Sleep(3000); system("cls");
}
