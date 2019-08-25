#ifndef BOOTLOADER_DEBUG_H
#define BOOTLOADER_DEBUG_H

#include <stdio.h>
#include <unistd.h>

#ifdef DEBUG

#define debug_printf(fmt, ...)   \
    fprintf(stderr, "STATICX []: " )
#define TAR_DEBUG_OPTIONS       (TAR_VERBOSE)

#else

#define debug_printf(fmt, ...)
#define TAR_DEBUG_OPTIONS       0

#endif

#endif /* BOOTLOADER_DEBUG_H */
