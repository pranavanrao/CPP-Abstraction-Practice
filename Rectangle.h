#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(double width, double height);

private:
    double m_width;
    double m_height;

public:
    double area() const override;
    string type() const override;
};

#endif // RECTANGLE_H
