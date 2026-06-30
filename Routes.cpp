#include "Routes.h"

// Global stats — definitions live here, declared as extern in Routes.h
// so Logic.cpp and UI.cpp can update/read them without owning the data.
int totalBookings = 0;
double totalRevenue = 0.0;

std::vector<BusRoute> getDefaultRoutes() {
    return {
        {1, "Kuala Lumpur - Malacca",     15.00, 40},
        {2, "Kuala Lumpur - Johor Bahru", 35.00, 40},
        {3, "Ipoh - Kuala Lumpur",        20.00, 40},
        {4, "Kuala Lumpur - Penang",      30.00, 40},
        {5, "Kuala Lumpur - Singapore",   70.00, 40}
    };
}
