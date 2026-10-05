#include <stdio.h>
#include <assert.h>
#include "en_rectangle.h"

int main(void) {
    assert(punt_dins_rectangle(2.5, 2.5, 6.0, 6.0, 5.0, 4.2) == true);
    assert(punt_dins_rectangle(2.5, 2.5, 6.0, 6.0, 5.1, 7.0) == false);

    double x1, y1, x2, y2, px, py;
    printf("Introdueix (x1, y1), (x2, y2) i el punt (px, py): ");
    if (scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &px, &py) == 6) {
        if (punt_dins_rectangle(x1, y1, x2, y2, px, py)) {
            printf("El punt està dintre del rectangle\n");
        } else {
            printf("El punt està fora del rectangle\n");
        }
    }
    return 0;
}