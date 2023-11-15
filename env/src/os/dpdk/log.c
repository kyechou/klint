#include "os/log.h"

#include <rte_debug.h>
#include <stdarg.h>
#include <stdio.h>

// #if DEBUG_LEVEL > 0
// #include <rte_log.h>

// void os_debug(const char* message) { rte_vlog(RTE_LOG_DEBUG, RTE_LOGTYPE_USER1, "%s\n", message); }
// #endif

void os_debug(const char* format, ...)
{
	va_list args;
	va_start(args, format);
	vfprintf(stdout, format, args);
	fflush(stdout);
}
