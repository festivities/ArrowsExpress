#ifndef HELPERS
#define HELPERS

#include <stdbool.h>
#include <stdio.h>
#include <windows.h>

inline void displayMenu(){
    printf("-------------------------------------------------------\n"
           "|                                                     |\n"
           "|                        MENU                         |\n"
           "|       1. Book a ticket                              |\n"
           "|       2. Cancel a booking                           |\n"
           "|       3. Display Schedule                           |\n"
           "|       4. Update Departure Time                      |\n"
           "|       5. Close application                          |\n"
           "|                                                     |\n"
           "-------------------------------------------------------\n");
}

extern void AMPM(const unsigned int time, char *(result[10]));

extern void updateDepartureTime(unsigned int *const departureTime);

inline bool lagunaManila(const int departureTime){ return departureTime % 2; }

#endif
