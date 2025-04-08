#pragma once

#include "inengineconstants.h"

class Polygon
{
    public:

        Point points[3];
        uint32_t origin_index;

        Polygon(Point p1, Point p2, Point p3);

};