#include <stdio.h>
#include <assert.h>
#include "maxof3_amb2if.h"

int main(void) {
    assert(max_of3_amb2if(3, 5, 2) == 5);
    assert(max_of3_amb2if(10, 1, 4) == 10);
    assert(max_of3_amb2if(2, 2, 8) == 8);
    
    printf("Tots els tests han passat!\n");
    return 0;
}