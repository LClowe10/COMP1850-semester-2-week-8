
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) 
{
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

Line makeLine( Point p1, Point p2 ) 
{
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 )
{
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLength( Line l )
{
    float ydiff = l.p[1].y - l.p[0].y;
    float xdiff = l.p[1].x - l.p[0].x;
    return sqrt((xdiff * xdiff) + (ydiff * ydiff));
}

float triangleArea( Triangle t )
{
    Line l1 =  makeLine (t.p[0], t.p[1]);
    Line l2 = makeLine (t.p[1], t.p[2]);
    Line l3 = makeLine (t.p[2], t.p[0]);

    float a = lineLength (l1);
    float b = lineLength (l2);
    float c = lineLength (l3);

    float s = ((a + b + c) / 2);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

bool samePoint( Point p1, Point p2 )
{
    return (fabs(p1.x - p2.x) < 1.0e-6 && fabs(p1.y - p2.y) < 1.0e-6);
}

bool pointInLine( Point p, Line l)
{
    return ( samePoint(p, l.p[0]) || samePoint(p, l.p[1]));
}

bool pointInTriangle( Point p, Triangle t )
{
    return ( samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]));
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

