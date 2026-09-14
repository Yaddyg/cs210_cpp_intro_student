#include "Point.h"

#include <iostream>
#include <ostream>

Point::Point() : Point(0.0, 0.0) {

    if (x < 0) {
        std::cout<<"Point is in negative x"<<std::endl;
    } else{
            std::cout<<"Point is in positive x"<<std::endl;

    }

}

Point::Point(double x, double y):x_(x), y_(y) {

}


Point::Point(double xy):Point(xy, xy) {

}
