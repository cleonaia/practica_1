#include <stdio.h>
#include <assert.h>
#include "maxof3Amb2if.h"

int main(void) {
    assert(maxof3_amb2if(3, 5, 2) == 5);
    assert(maxof3_amb2if(10, 1, 4) == 10);
    assert(maxof3_amb2if(2, 2, 8) == 8);

    int a, b, c;
    printf("Introdueix tres enters: ");
    if (scanf("%d %d %d ", &a, &b, &c) == 3) {
      printf("El màxim nombre que tenim és:" maxoff3_amb2if(a,b,c));
    }
      return 0;
    }

