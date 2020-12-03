#include "Vec2D.hpp"

double Vec2D::get_norm() const {
    double Y = pow(getY(), 2);
    double X = pow(getX(), 2);
    return sqrt (X + Y);
}