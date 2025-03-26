#include <stdio.h>
#include "defines.h"

int main() {
    // Check compiler detection
    #ifdef COMPILER_CLANG
        printf("Compiler: Clang\n");
    #elif defined(COMPILER_GCC)
        printf("Compiler: GCC\n");
    #elif defined(COMPILER_MSVC)
        printf("Compiler: MSVC\n");
    #else
        printf("Compiler: Unknown\n");
    #endif

    // Check OS detection
    #ifdef OS_WINDOWS
        printf("Operating System: Windows\n");
    #elif defined(OS_LINUX)
        printf("Operating System: Linux\n");
    #else
        printf("Operating System: Unsupported\n");
    #endif

    // Test boolean macros
    printf("Boolean true: %d\n", true);
    printf("Boolean false: %d\n", false);

    // Test min, max, clamp
    int a = 5, b = 10, c = 7;
    printf("Min(%d, %d) = %d\n", a, b, Min(a, b));
    printf("Max(%d, %d) = %d\n", a, b, Max(a, b));
    printf("Clamp(%d, %d, %d) = %d\n", a, c, b, Clamp(a, c, b));

    // Test memory functions
    u8 buffer[10];
    MemoryZero(buffer, sizeof(buffer));
    printf("MemoryZero test (first byte): %d\n", buffer[0]);

    // Test path max and getcwd
    char path[PATH_MAX];
    if (getcwd(path, sizeof(path))) {
        printf("Current directory: %s\n", path);
    } else {
        printf("Failed to get current directory\n");
    }


    return 0;
}
