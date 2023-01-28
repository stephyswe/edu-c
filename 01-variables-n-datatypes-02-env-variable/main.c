#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("Name of user:%s so now you know\n", getenv("USER") );
    printf("Pathen %s\n", getenv("PATH") );
}