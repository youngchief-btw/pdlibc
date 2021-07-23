#ifndef PDLIBC_C_ASSERT
#define PDLIBC_C_ASSERT

/*
Here's the start of the code
I did this as to not duplicate declarations when multiple things depend on this
*/
#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C" {
#endif

#ifndef NDEBUG
void assert(int expression);
#else
#define assert(ignore)((void) 0)
#endif

#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif

#endif