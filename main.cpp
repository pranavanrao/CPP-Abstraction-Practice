#include <iostream>

#include "Rectangle.h"
#include "Circle.h"

using namespace std;


void printShapeInfo(const Shape& shape) {
    cout << "Shape : " << shape.type() << endl;
    cout << "Area  : " << shape.area() << endl;
    cout << "-------------------------" << endl;
}

int main()
{
    Rectangle rect(5.0, 4.0);
    Circle circle(3.0);

    printShapeInfo(rect);
    printShapeInfo(circle);

    return 0;
}
