#ifndef DURATION_H
#define DURATION_H

#include <stdint.h>

// Define Duration type
typedef int64_t Duration;

// Declare access functions for constants
Duration get_nanosecond();
Duration get_microsecond();
Duration get_millisecond();
Duration get_second();
Duration get_minute();
Duration get_hour();

#endif // DURATION_H
