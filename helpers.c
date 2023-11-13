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

const char *schedCalc(const unsigned int targetTime, const unsigned int departureTime){
    if(departureTime > targetTime) return "XXX";
    else if(departureTime == targetTime) return "<--"; else return "   ";  
}

void displaySchedule(const unsigned int departureTime){
    system("cls");
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
