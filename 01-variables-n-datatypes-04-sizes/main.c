#include <stdio.h>
#include <limits.h>
#include <float.h>

void main(){
    // char, short int, int, long, float, double
    // char c = 'A'; 8 bitar ; 65
    printf("char\t%d\t%u\n", CHAR_MIN, CHAR_MAX);
    printf("uchar\t%d\t%u\n", 0, UCHAR_MAX);

    printf("short\t%d\t%u\n", SHRT_MIN, SHRT_MAX);
    printf("ushort\t%d\t%u\n", 0, USHRT_MAX);
    
    printf("int\t%d\t%u\n", INT_MIN, INT_MAX);
    printf("uint\t%d\t%u\n", 0, UINT_MAX);

    printf("long\t%d\t%u\n", LONG_MIN , LONG_MAX );
    printf("ulong\t%d\t%u\n", 0, ULONG_MAX);

    printf("llong\t%lld\t%llu\n", LLONG_MIN , LLONG_MAX );
    printf("ullong\t%d\t%llu\n", 0, ULLONG_MAX);

    printf("float\t%g\t%g\n", FLT_MIN, FLT_MAX);
    printf("double\t%g\t%g\n", DBL_MIN, DBL_MAX);
}