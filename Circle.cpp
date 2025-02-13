#include "Circle.h"

Circle::Circle(double radius) : m_radius(radius) {}

double Circle::area() const
{
    return 3.14159 * m_radius * m_radius;
}

string Circle::type() const
{
    return "Circle";
}
