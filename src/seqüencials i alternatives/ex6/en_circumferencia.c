#include <stdbool.h>
#include "en_circumferencia.h"

// Retorna true si està dins (o al límit), false si està fora.
// Com que només volem saber si el punt és dins de la circumferència,
// comparem la distància al quadrat amb el radi al quadrat i així
// evitem calcular l'arrel quadrada (sqrt).

bool punt_dins_circumferencia(double cx, double cy, double r, double px, double py) {
    double dist_sq = (px - cx) * (px - cx) + (py - cy) * (py - cy);
    return dist_sq <= (r * r);
}

