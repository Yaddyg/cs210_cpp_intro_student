#include "geometry.h"
#include <cmath>
namespace cs210 {
    double circleArea(double radius) {
        // TODO: return pi * radius * radius
        return 3.14 * radius * radius;


    }
}

namespace legacy_lib {
    double circleArea(double diameter) {
        // TODO: this version takes a DIAMETER. Convert it to a radius
        // first, then return pi * radius * radius.
        double raidus = diameter / 2;
        return 3.14 * diameter;
    }
}
