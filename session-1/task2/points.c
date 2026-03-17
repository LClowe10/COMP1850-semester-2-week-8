
#include <stdio.h>
#include <math.h>
#include "points.h"

int main( void ) {
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    
    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    
    return 0;
}

float distance( Point p, Point q ) {
    // Calculates the difference between two points
    return sqrt(pow((q.x - p.x), 2) + pow((q.y - p.y), 2));
}

void reflect ( Point* q ) 
{
    q->y = -q->y;
}

void shift( Point q, Point* dq)
{

}