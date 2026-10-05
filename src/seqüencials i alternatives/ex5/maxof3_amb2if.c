#include "maxof3_amb2if.h"

int max_of3_amb2if(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
