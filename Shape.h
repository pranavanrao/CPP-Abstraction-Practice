#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape
{
public:
    virtual ~Shape() = default;

    virtual double area() const = 0;

    virtual string type() const = 0;
};

#endif // SHAPE_H
