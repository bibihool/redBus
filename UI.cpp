#include <iostream>
#include <iomanip>
#include "UI.h"
#include "Logic.h"
#include "Routes.h"
#include "Validation.h"

// --- Member 4: Salenndram ---

int displayMainMenu() {
    std::cout << "\n";
    std::cout << "========================================\n";
    std::cout << "              redBus Ticketing           \n";
    std::cout << "========================================\n";
    std::cout << "  1. Book Ticket\n";
    std::cout << "  2. View Routes\n";
    std::cout << "  3. Exit\n";
    std::cout << "========================================\n";

    return getValidatedMenuChoice("Select an option (1-3): ", 1, 3);
}

void viewRoutes(const std::vector<BusRoute>& routes) {
    std::cout << "\n";
    std::cout << "----------------------------------------------------------------\n";
    std::cout << std::left
              << std::setw(5)  << "ID"
              << std::setw(28) << "Destination"
              << std::setw(12) << "Fare (RM)"
              << std::setw(10) << "Seats" << "\n";
    std::cout << "----------------------------------------------------------------\n";

    for (const auto& route : routes) {
        std::cout << std::left
                  << std::setw(5)  << route.routeId
                  << std::setw(28) << route.destination
                  << std::setw(12) << std::fixed << std::setprecision(2) << route.baseFare
                  << std::setw(10) << route.availableSeats << "\n";
    }
    std::cout << "----------------------------------------------------------------\n";
}

void bookingFlow(std::vector<BusRoute>& routes) {
    std::cout << "\n--- Book a Ticket ---\n";
    viewRoutes(routes);

    int index = getValidatedRouteIndex(routes);
    BusRoute& selected = routes[index];

    if (selected.availableSeats <= 0) {
        std::cout << "\nSorry, this route is fully booked.\n";
        return;
    }

    int passengerCount = getValidatedPassengerCount(selected.availableSeats);

    double fare = calculateFare(selected.baseFare, passengerCount);
    bool success = updateSeats(routes, selected.routeId, passengerCount);

    if (!success) {
        std::cout << "\nBooking could not be completed. Please try again.\n";
        return;
    }

    totalRevenue += fare;

    // Ticket confirmation screen
    std::cout << "\n";
    std::cout << "================================================\n";
    std::cout << "             redBus Digital Ticket               \n";
    std::cout << "================================================\n";
    std::cout << " Destination     : " << selected.destination << "\n";
    std::cout << " Passengers      : " << passengerCount << "\n";
    std::cout << " Fare per Seat   : RM "
              << std::fixed << std::setprecision(2) << selected.baseFare << "\n";
    std::cout << "------------------------------------------------\n";
    std::cout << " Total Fare      : RM "
              << std::fixed << std::setprecision(2) << fare << "\n";
    std::cout << " Seats Remaining : " << selected.availableSeats << "\n";
    std::cout << "================================================\n";
    std::cout << "        Thank you for booking with redBus!       \n";
    std::cout << "================================================\n\n";
}
