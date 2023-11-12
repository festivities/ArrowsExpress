#include "helpers.h"

void AMPM(const unsigned int time, char (*result)[10]){ 
    snprintf(result, 10, "%d%s", (time > 11) ? time - 12 : time, (time > 11) ? "PM" : "AM");
}

void updateDepartureTime(unsigned int *const departureTime){
    system("cls");
    char buffer[10]; AMPM(*departureTime, buffer);
    printf("The current departure time is %s, please set a new departure time.\n", buffer);
    printf("New departure time input must be a value between 4AM (4) and 8PM (20), as well as "
           "the new departure time being later than the current (%s) departure time: ", buffer);
    unsigned int newTime = 0;
    while(scanf("%u", &newTime) != 1 || newTime < 0 || newTime > 23 || newTime <= *departureTime){
        system("cls");
        printf("New departure time input must be a value between 4AM (4) and 8PM (20), as well as "
               "the new departure time being later than the current (%s) departure time: ", buffer);
        while(getchar() != '\n');
    }
    *departureTime = newTime;
    system("cls");
    AMPM(newTime, buffer);
    printf("New departure time set to %s! Returning to menu...", buffer); Sleep(3000); system("cls");
}
