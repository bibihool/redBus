#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>
#include <vector>
#include "BusRoute.h"

// --- Member 5: Aqef ---
// Reusable, retry-until-valid input helpers used by UI.cpp.
// Keeping these in their own file means UI.cpp can build the *display*
// layer without also owning all the defensive input-checking code.

// Repeatedly prompts until the user enters an integer within [min, max].
// Handles non-numeric input (e.g. typing "abc") without crashing or looping forever.
int getValidatedMenuChoice(const std::string& prompt, int min, int max);

// Prompts for a Route ID, re-prompting until it matches an existing route.
// Returns the index into `routes` of the matching entry.
int getValidatedRouteIndex(const std::vector<BusRoute>& routes);

// Prompts for a passenger count, re-prompting until it is a positive integer
// that does not exceed the seats available on the selected route.
int getValidatedPassengerCount(int availableSeats);

#endif
