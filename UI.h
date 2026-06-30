#ifndef UI_H
#define UI_H

#include <vector>
#include "BusRoute.h"

// Implement these in UI.cpp.
// Do not change the signatures without telling the team, since main.cpp depends on them.

// Prints the welcome message + menu (1. Book Ticket, 2. View Routes, 3. Exit).
// Returns the user's chosen option as an int.
int displayMainMenu();

// Lists all routes with destination, fare, and available seats.
void viewRoutes(const std::vector<BusRoute>& routes);

// Full booking flow: select route -> standard/VIP -> passenger count ->
// calls calculateFare() and updateSeats() from Logic.h -> shows checkout screen.
void bookingFlow(std::vector<BusRoute>& routes);

#endif
