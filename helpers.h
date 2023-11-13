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

inline bool manilaLaguna(const unsigned int departureTime){ return departureTime % 2; }

extern void displayBus(const bool seat1Taken,
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
                       const unsigned int seat14ID);

extern void bookTrip(bool *const seat1Taken,
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
                     unsigned int *const ticketCount);

extern void bookCancel(bool *const seat1Taken,
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
                       unsigned int *const ticketCount);

extern const char *schedCalc(const unsigned int targetTime, const unsigned int departureTime);

extern void displaySchedule(const unsigned int departureTime);

#endif
