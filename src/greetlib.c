#include "greetlib.h"
#include <stdio.h>

static char buffer[256];

const char *greet(const char *name) {
    snprintf(buffer, sizeof(buffer), "Hello, %s!", name);
    return buffer;
}

