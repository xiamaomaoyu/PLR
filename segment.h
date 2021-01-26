//
// Created by user on 2021/1/27.
//

#ifndef PLR_SEGMENT_H
#define PLR_SEGMENT_H
#include "geo.h"

/* The final struct to be stored as a segment
 * should be concise
 * */
class segment {
public:
    Point head;
    Line line;
};


/* preparing a new segment
 *
 * */
class segmentProducer{
public:
    Point head;
    Line upperSlope;
    Line lowerSlope;
    // upper and lower convex hull
    // TODO
};


#endif //PLR_SEGMENT_H
