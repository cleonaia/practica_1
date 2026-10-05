#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "en_circumferencia.h"

int main(void) {
    assert(punt_dins_circumferencia(0.0, 0.0, 1.0, 1.0, 0.0) == true);
    assert(punt_dins_circumferencia(1.0, 2.0, 1.2, 0.0, 0.0) == false);

    double cx, cy, r, px, py;
    printf("Introdueix centre (cx, cy), radi r i punt (px, py): ");
    if (scanf("%lf %lf %lf %lf %lf", &cx, &cy, &r, &px, &py) == 5) {
        if (punt_dins_circumferencia(cx, cy, r, px, py)) {
            printf("El punt és dins la circumferència.\n");
        } else {
            printf("El punt és fora la circumferència.\n");
        }
    }
    return 0;
}