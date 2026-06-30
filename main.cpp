#include <iostream>
#include <vector>
#include "BusRoute.h"
#include "Logic.h"
#include "UI.h"
#include "Routes.h"

int main() {
    std::vector<BusRoute> routes = getDefaultRoutes();

    bool running = true;

    while (running) {
        int choice = displayMainMenu();

        switch (choice) {
            case 1:
                bookingFlow(routes);
                break;
            case 2:
                viewRoutes(routes);
                break;
            case 3:
                std::cout << "Thank you for using redBus. Safe travels!\n";
                running = false;
                break;
            default:
                std::cout << "Invalid option. Please try again.\n";
                break;
        }
    }

    return 0;
}
