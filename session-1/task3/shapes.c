
#include <stdio.h>
#include "shapes.h"

int main( void ) {
    Point* origin = {
        .x = 1,
        .y = -1
    };
    Rectangle* r = makeRectangle(&origin, 10, 20);

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Point q = {
        .x = 3,
        .y = -2
    };

    shiftRectangle(r, q);
    scaleRectangle(r, 2.5);
    free(r);
    free(origin);

    return 0;
}

Rectangle* makeRectangle( Point* p, float width, float height ){
    Rectangle* r = malloc(sizeof(Rectangle));
    r->origin = p;
    r->width = width;
    r->height = height;

    return r;
}

float area( Rectangle* r ) {
    return r->height * r->width;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r->origin->x += dp.x;
    r->origin->y += dp.y;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->height *= scale;
    r->width *= scale;
}
