//
// Created by user on 2021/1/25.
//

#include "geo.h"
#include <iostream>

/* A point is a datapoint
 *  rank is its offset in the file
 *  value is its value
 *  we normally take x=value and y=rank in regression
 * */
Point::Point(double rank,double value){
    y = rank;
    x = value;
}


/* Construct a line that go through two points
 * */
Line::Line(Point a, Point b) {
    //TODO
}

/* Construct a line with slope and intercept
 * */
Line::Line(double slope, double intercept) {
    slope = slope;
    intercept = intercept;
}

/* Construct a line that go through a certain point with a certain slope
 * */
Line::Line(Point a, double slope) {
    //TODO
}

/* Find the intersection point of two lines
 * this and another
 * */
Point Line::intersection(Line b) {
    //TODO
    return Point(0, 0);
}

/* Find the symmetryAxis of two lines
 * this and another
 * */
Line Line::symmetryAxis(Line b) {
    Point intersect = this->intersection(b);
    double nSlope = (this->slope + b.slope)/2;
    return {intersect, nSlope};
}


