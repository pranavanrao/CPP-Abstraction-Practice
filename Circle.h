#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(double radius);

private:
    double m_radius;

    // Shape interface
public:
    double area() const override;
    string type() const override;
};

#endif // CIRCLE_H
