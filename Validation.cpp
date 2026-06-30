#include <iostream>
#include <limits>
#include "Validation.h"

// --- Member 5: Aqef ---

// Clears a failed cin state and discards the rest of the bad input line,
// so a non-numeric entry (e.g. "abc") doesn't cause an infinite loop.
static void clearBadInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getValidatedMenuChoice(const std::string& prompt, int min, int max) {
    int choice;
    while (true) {
        std::cout << prompt;

        if (std::cin >> choice && choice >= min && choice <= max) {
            return choice;
        }

        std::cout << "Invalid option. Please enter a number between "
                  << min << " and " << max << ".\n";
        clearBadInput();
    }
}

int getValidatedRouteIndex(const std::vector<BusRoute>& routes) {
    while (true) {
        std::cout << "Enter Route ID: ";
        int routeId;

        if (!(std::cin >> routeId)) {
            std::cout << "Please enter a valid number.\n";
            clearBadInput();
            continue;
        }

        for (size_t i = 0; i < routes.size(); ++i) {
            if (routes[i].routeId == routeId) {
                return static_cast<int>(i);
            }
        }

        std::cout << "Route ID " << routeId << " does not exist. Please try again.\n";
    }
}

int getValidatedPassengerCount(int availableSeats) {
    while (true) {
        std::cout << "Enter number of passengers ("
                  << availableSeats << " seat(s) available): ";
        int count;

        if (!(std::cin >> count)) {
            std::cout << "Please enter a valid number.\n";
            clearBadInput();
            continue;
        }

        if (count <= 0) {
            std::cout << "Passenger count must be at least 1.\n";
            continue;
        }

        if (count > availableSeats) {
            std::cout << "Only " << availableSeats
                      << " seat(s) left on this route. Please enter a smaller number.\n";
            continue;
        }

        return count;
    }
}
