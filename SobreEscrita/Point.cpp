#include <iostream>

#include "Point.h"

std::ostream & operator << (std::ostream &out, const Point &p) {
  return out << "(" << p.getX() << ", " << p.getY() << ")";
}

std::istream & operator >> (std::istream &in,  Point &p) {
  return in >> p.x >> p.y;
  return in;
}

Point Point::operator + (const Point &p) {
   Point newP (x + p.getX(), y + p.getY());
   return newP;
}

Point& Point::operator += (const Point &p) {
  x = getX() + p.getX();
  y = getY() + p.getY();
  return *this;
}