#include <iostream>
#include "geo.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Point p0 =Point(0,0);
    Point p1 =Point(1,1);
    Point p2 =Point(3,3);
    int ep = 1;
    Line l01up = Line(p0.lowerbound(ep),p1.upperbound(ep));
    Line l01lo = Line(p0.upperbound(ep),p1.lowerbound(ep));
    Point inter = l01up.intersection(l01lo);
    std::cout << inter.x << std::endl;
    return 0;
}
