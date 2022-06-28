#include "platform/platform.h"

// Windows platform layer.
#if KPLATFORM_LINUX

#include "core/logger.h"

typedef struct internal_state {
} internal_state;

// Clock
static f64 clock_frequency;

b8 platform_startup(
    platform_state* plat_state,
    const char* application_name,
    i32 x,
    i32 y,
    i32 width,
    i32 height) {
    plat_state->internal_state = malloc(sizeof(internal_state));
    internal_state* state = (internal_state*)plat_state->internal_state;
}

void platform_shutdown(platform_state* plat_state) {
    // Simply cold-cast to the known type.
    internal_state* state = (internal_state*)plat_state->internal_state;
}

b8 platform_pump_messages(platform_state* plat_state) {
}

void* platform_allocate(u64 size, b8 aligned) {
    return malloc(size);
}

void platform_free(void* block, b8 aligned) {
    free(block);
}

void* platform_zero_memory(void* block, u64 size) {
    return memset(block, 0, size);
}

void* platform_copy_memory(void* dest, const void* source, u64 size) {
    return memcpy(dest, source, size);
}

void* platform_set_memory(void* dest, i32 value, u64 size) {
    return memset(dest, value, size);
}

void platform_console_write(const char* message, u8 colour) {
    printf(message);
}

void platform_console_write_error(const char* message, u8 colour) {
    printf(message);
}

f64 platform_get_absolute_time() {
}

void platform_sleep(u64 ms) {
}

#endif  // KPLATFORM_WINDOWS