#include <iostream>
#include "Logic.h"
#include "Routes.h"

// --- Member 3: Bryan ---

double calculateFare(double baseFare, int passengerCount) {
    return baseFare * passengerCount;
}

bool updateSeats(std::vector<BusRoute>& routes, int routeId, int seatsBooked) {
    for (auto& route : routes) {
        if (route.routeId == routeId) {
            if (route.availableSeats < seatsBooked) {
                std::cout << "Not enough seats available on this route.\n";
                return false;
            }

            route.availableSeats -= seatsBooked;
            totalBookings += 1;
            return true;
        }
    }

    std::cout << "Route ID not found.\n";
    return false;
}
