#ifndef ROUTES_H
#define ROUTES_H

#include <vector>
#include "BusRoute.h"

// --- Member 2: Jack ---
// Owns route inventory setup and global business stats.

// Returns the default set of intercity routes the app starts with.
std::vector<BusRoute> getDefaultRoutes();

// Running totals, updated whenever a booking succeeds (see Logic.cpp).
// Declared here so any file can report on them (e.g. an admin/summary screen).
extern int totalBookings;
extern double totalRevenue;

#endif
