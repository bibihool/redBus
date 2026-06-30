#ifndef LOGIC_H
#define LOGIC_H

#include <vector>
#include "BusRoute.h"

// Implement these in Logic.cpp.
// Do not change the signatures without telling the team, since main.cpp and UI.cpp depend on them.

// Calculates total price for a booking.
double calculateFare(double baseFare, int passengerCount);

// Deducts seatsBooked from the matching route's availableSeats.
// Returns true if the booking succeeded (enough seats were available).
bool updateSeats(std::vector<BusRoute>& routes, int routeId, int seatsBooked);

#endif
