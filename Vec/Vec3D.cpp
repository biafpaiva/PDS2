#include "Vec3D.hpp"

double Vec3D::get_norm() const{
    double Z = pow(getZ(), 2);
    double Y = pow(getY(), 2);
    double X = pow(getX(), 2);
    return sqrt (X + Y + Z);
}