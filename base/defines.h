/* date = Wednesday, 03-26-2025 08:35 PM*/

#ifndef DEFINES_H
#define DEFINES_H


// Unsigned int types.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

// Signed int types.
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;

// Regular int types.
typedef char i8;
typedef short i16;
typedef int i32;
typedef long long i64;

// Floating point types
typedef float f32;
typedef double f64;

// Boolean types
typedef u8  b8;
typedef u32 b32;

// Void function type
typedef void void_func(void);
typedef void (*void_func_ptr)(void);

#define true 1
#define false 0

#define null 0
#define u32_max 4294967295

#ifndef __cplusplus
#define nullptr ((void*)0)
#endif

#if defined (__clang__)
#define COMPILER_CLANG
#elif defined (__GNUC__)
#define COMPILER_GCC
#elif defined (_MSC_VER)
#define COMPILER_MSVC
#endif

#if defined (COMPILER_CLANG)
#define FILE_NAME __FILE__
#else
#define FILE_NAME __FILE__
#endif

#define Statement(s) do {\
s\
} while (0)


#define flush fflush(stdout)
#define trace Statement(printf("%s:%d: Trace\n", FILE_NAME, __LINE__); flush;)
#define unreachable Statement(\
printf("How did we get here? In %s on line %d\n", FILE_NAME, __LINE__);\
flush;\
)

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#define OS_WINDOWS
#elif defined(__linux__) || defined(__unix__) || defined(__posix__) || defined(__gnu_linux__)
#define OS_LINUX
#else
#error "OS not supported: Only Linux and Windows are supported."
#endif
#define PATH_MAX 4096

#ifdef OS_WINDOWS
#include <direct.h>
#define getcwd _getcwd
#elif defined(OS_LINUX)
#include <unistd.h>
#define getcwd getcwd
#endif

#if defined(COMPILER_CLANG)
#define dll_export _declspec(dllexport)
#define dll_import _declspec(dllimport)
#elif defined(COMPILER_GCC)
#define dll_export __attribute__((dlldll_export))
#define dll_import __attribute__((dlldll_import))
#elif defined(COMPILER_MSVC)
#define dll_export __declspec(dllexport)
#define dll_import __declspec(dllimport)
#else
#error "Compiler not supported: Only Clang, GCC, and MSVC are supported."
#endif

#ifdef IS_PLUGIN
#define dll_plugin_api
#else
#define dll_plugin_api dll_export
#endif

#define Gigagbytes(count) (u64) (count) * 1024 * 1024 * 1024
#define Megabytes(count) (u64) (count) * 1024 * 1024
#define Kilobytes(count) (u64) (count) * 1024

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Clamp(a,x,b) ((a) < (x) ? (x) : (a) > (b) ? (b) : (a))
#define ClampTop(a,b) Min(a,b)
#define ClampBot(a,b) Max(a,b)
#define ReverseClamp(a,x,b) ((a) > (x) ? (x) : (a) < (b) ? (b) : (a))
#define Wrap(a,x,b) ReverseClamp(a,x,b)

#define MemoryCopy(dest, src, size) memmove((dest), (src), (size))
#define MemoryCopyStruct(d,s) MemoryCopy((d),(s), Min(sizeof(*(d)) , sizeof(*(s))))
#define MemoryZero(d,z) memset((d), 0, (z))
#define MemoryZeroStruct(d,s) MemoryZero((d),sizeof(s))

#define ArrayCount(a) (sizeof(a) / sizeof((a)[0]))

#define Iterate(array, count) for (u32 i = 0; i < count; i++)
#define IterateBackwards(array, count) for (u32 i = count - 1; i >= 0; i--)

// TODO: macro for linked list
// #define LinkedList(type) struct {\
// type *next;\
// type *prev;\
// }
// #define LinkedListInit(list) (list)->next = (list)->prev = (list)
// #define LinkedListInsertAfter(list, node) {\
// (node)->next = (list)->next;\
// (node)->prev = (list);\
// (list)->next->prev = (node);\
// (list)->next = (node);\
// }










#endif
