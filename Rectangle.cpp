#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
    : m_width(width), m_height(height) {}

double Rectangle::area() const
{
    return m_width * m_height;
}

string Rectangle::type() const
{
    return "Rectangle";
}
