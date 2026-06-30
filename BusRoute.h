#ifndef BUSROUTE_H
#define BUSROUTE_H

#include <string>

// Shared data structure - included by Logic and UI files.
// Do not edit casually; changes here affect everyone's code.
struct BusRoute {
    int routeId;
    std::string destination;
    double baseFare;
    int availableSeats;
};

#endif
