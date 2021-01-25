//
// Created by user on 2021/1/25.
//

#ifndef PLR_GEO_H
#define PLR_GEO_H

#endif //PLR_GEO_H
#include <math.h>

class Point{
public:
    double x{};
    double y{};

    Point(double rank,double value);
    int upperbound(int epsilon) const {return floor(y+epsilon);}
    int lowerbound(int epsilon) const {return floor(y-epsilon);};
};

class Line{
public:
    double slope{};
    double intercept{};

    Line(Point a,Point b);
    Line(Point a,double slope);
    Line(double slope,double intercept);

    Point intersection(Line b);
    Line symmetryAxis(Line b);
};